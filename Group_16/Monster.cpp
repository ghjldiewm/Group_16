#include "Monster.h"
#define NOMINMAX
#include <windows.h>
#include <vector>
#include <random>
#include <chrono>
#include <thread>
#include <algorithm>
#include <cstdlib> // system("cls")
#include <limits>

Monster::Monster(std::string name, Stats stats)
    :Unit(name, stats) { }

void Monster::WaitEnter()
{
    std::cout << "\n(Enter로 계속...)\n";
    std::string dummy;
    std::getline(std::cin, dummy);
}

void Monster::TypePrint(const std::string& text
    , int color
    , int delayMs
    , bool newLine)
{ 
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // 현재 콘솔 색(속성) 저장
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hConsole, &csbi);
    WORD oldColor = csbi.wAttributes;

    // 원하는 색으로 변경
    SetConsoleTextAttribute(hConsole, (WORD)color);

    // 한 글자씩 출력
    for (char c : text)
    {
        std::cout << c << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(delayMs));
    }

    // 원래 색으로 복구
    SetConsoleTextAttribute(hConsole, oldColor);

    if (newLine) std::cout << '\n';
}


//////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////


static std::mt19937 s_rng(
    (unsigned)std::chrono::high_resolution_clock::now().time_since_epoch().count()
);

static double Lerp(double a, double b, double t) { return a + (b - a) * t; }

static void PunchHoles(std::string& line, int holes, int minLen, int maxLen)
{
    if (line.empty()) return;
    std::uniform_int_distribution<int> startDist(0, (int)line.size() - 1);
    std::uniform_int_distribution<int> lenDist(minLen, maxLen);

    for (int i = 0; i < holes; ++i)
    {
        int start = startDist(s_rng);
        int len = lenDist(s_rng);
        for (int j = 0; j < len; ++j)
        {
            int idx = start + j;
            if (0 <= idx && idx < (int)line.size())
                line[idx] = ' ';
        }
    }
}

static std::string MakeBlockLine(int width, double progress)
{
    // 7번 컨셉: 진행도에 따라 점점 더 촘촘
    double p = 0.0;
    if (progress < 0.33)      p = Lerp(0.15, 0.45, progress / 0.33);
    else if (progress < 0.75) p = Lerp(0.45, 0.75, (progress - 0.33) / 0.42);
    else                      p = Lerp(0.75, 0.92, (progress - 0.75) / 0.25);

    std::bernoulli_distribution fill(p);

    std::string s(width, ' ');
    for (int i = 0; i < width; ++i)
        s[i] = fill(s_rng) ? '#' : ' ';

    int holes = (progress < 0.25) ? 0 : (progress < 0.7 ? 1 : 2);
    PunchHoles(s, holes, 2, 8);

    return s;
}

void Monster::FillRiseFull(int width, int height,
    const std::string& warningText,
    int warningFromBottom,
    int frameMs)
{
    width = std::max(1, width);
    height = std::max(1, height);
    frameMs = std::max(0, frameMs);

    // 색 원복용
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hConsole, &csbi);
    WORD oldColor = csbi.wAttributes;

    // 아래에서 N번째 줄 -> 위에서 (height - N)
    warningFromBottom = std::clamp(warningFromBottom, 1, height);
    const int warningRowFromTop = height - warningFromBottom;

    for (int filled = 1; filled <= height; ++filled)
    {
        system("cls");

        int empty = height - filled;

        // 위쪽 빈 줄
        for (int i = 0; i < empty; ++i)
            std::cout << std::string(width, ' ') << "\n";

        // 아래쪽 채워지는 줄
        for (int i = 0; i < filled; ++i)
        {
            int rowFromTop = empty + i; // 0~height-1
            double progress = (filled <= 1) ? 1.0 : (double)i / (double)(filled - 1);

            if (rowFromTop == warningRowFromTop)
            {
                std::string msg = warningText;
                if ((int)msg.size() > width) msg = msg.substr(0, width);

                int pad = std::max(0, (width - (int)msg.size()) / 2);

                SetConsoleTextAttribute(hConsole, 12); // 빨강
                std::cout << std::string(pad, ' ') << msg << "\n";
                SetConsoleTextAttribute(hConsole, oldColor);
            }
            else
            {
                std::cout << MakeBlockLine(width, progress) << "\n"; // '#' 줄 생성 함수
            }
        }

        std::this_thread::sleep_for(std::chrono::milliseconds(frameMs));
    }
}

void Monster::FillRiseCenter(int width, int height, int centerWidth,
    const std::string& warningText,
    int warningFromBottom,
    int frameMs)
{
    width = std::max(1, width);
    height = std::max(1, height);
    frameMs = std::max(0, frameMs);

    centerWidth = std::clamp(centerWidth, 1, width);
    int margin = (width - centerWidth) / 2;

    // 색 원복용
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hConsole, &csbi);
    WORD oldColor = csbi.wAttributes;

    // 아래에서 N번째 줄 -> 위에서 (height - N)
    warningFromBottom = std::clamp(warningFromBottom, 1, height);
    const int warningRowFromTop = height - warningFromBottom;

    for (int filled = 1; filled <= height; ++filled)
    {
        system("cls");

        int empty = height - filled;

        for (int i = 0; i < empty; ++i)
            std::cout << std::string(width, ' ') << "\n";

        for (int i = 0; i < filled; ++i)
        {
            int rowFromTop = empty + i;
            double progress = (filled <= 1) ? 1.0 : (double)i / (double)(filled - 1);

            if (rowFromTop == warningRowFromTop)
            {
                std::string msg = warningText;
                if ((int)msg.size() > centerWidth) msg = msg.substr(0, centerWidth);

                int padInCenter = std::max(0, (centerWidth - (int)msg.size()) / 2);

                std::cout << std::string(margin, ' ');

                SetConsoleTextAttribute(hConsole, 12); // 빨강
                std::cout << std::string(padInCenter, ' ') << msg;
                SetConsoleTextAttribute(hConsole, oldColor);

                std::cout << "\n";
            }
            else
            {
                std::string line(width, ' ');
                std::string mid = MakeBlockLine(centerWidth, progress); // 네 '#' 줄 생성 함수

                for (int k = 0; k < centerWidth; ++k)
                    line[margin + k] = mid[k];

                std::cout << line << "\n";
            }
        }

        std::this_thread::sleep_for(std::chrono::milliseconds(frameMs));
    }
}
