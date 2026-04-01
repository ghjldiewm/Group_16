#include "kyunghopark.h"

/*struct Stats
    1. MaxHP = 200;
    2. HP = 200;
    3. MaxMP = 100;
    4. MP = 100;

    5. Attack = 30;
    6. Defense = 50;
    7. Speed = 10;
    8. Crit = 5;

    9. Exp = 0;
    10. Level = 1;
*/

kyunghopark::kyunghopark()
    :Monster("박경호튜터", Stats{ 10000,10000,1,1,1,1,9999,999 }) {
}

void kyunghopark::EncounterMessage()
{
    TypePrint(". . .", 10, 300, 1);
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    std::cout << "\n";
    TypePrint("야생의 박경호튜터와 조우했다! 불길한 느낌이 든다.", 500);
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    TypePrint("\n(전투를 시작하려면)", 7, 0, 0);
    WaitEnter();
    FillRiseFull(120, 35, "!!! BOSS WARNING !!!", 6, 40);
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    TypePrint(". . .", 10, 300, 1);
    TypePrint("ㅇㅕ..ㄹㅓ..", 100, 80, 0);
    TypePrint(".ㅂ..ㅜ..ㄴ....", 300, 80);
    TypePrint("11101100 10010111 10101100 11101011 10011111 10101100 11101011 10110110 10000100 00100000", 10, 20);
    TypePrint("11101011 10111001 10100001 11101100 10100111 10000000 00100000 11101100 10010011 10110000", 10, 10);
    TypePrint("11101100 10000101 10010100 11101100 10010101 10111100 00100000 11101101 10010101 10101001", 10, 3);
    TypePrint("11101011 10001011 10001000 11101011 10001011 10100100 00101110 00100000", 10, 3);
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    TypePrint("\n이게 무슨 뜻일까?\n", 7);
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    TypePrint("'Enter'를 눌러서 해석하자", 7, 40, 0);
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    WaitEnter();
    for (int i = 0; i < 3; ++i)
    {
        std::cout << '.' << " ";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(400));
    }
    TypePrint("해석중 . . . . . . !", 7, 100);
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    TypePrint("\n해석 완료!\n", 10);
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    TypePrint("해석:", 7, 100, 0);
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    TypePrint(" 여러분", 400, 50, 0);
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    TypePrint(" 빡지", 400, 50, 0);
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    TypePrint(" 쓰셔야 합니다.", 400, 50);
    TypePrint("\n. . . 엥?", 7, 300, 0);
    TypePrint(" 저기. . 튜터님. . . ?\n", 7, 100, 0);
    WaitEnter();
}

void kyunghopark::Skill01()
{
    std::string Choice;
    TypePrint("박경호튜터가 스킬을 사용했다!", 7);
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
    std::cout << "\n";

    TypePrint(" 『                       ", 500, 0);
    TypePrint("     \"빡지쓰기 제1장\"     ", 500, 0);
    TypePrint("                        』", 500, 0);
    std::cout << "\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
    TypePrint("박경호튜터가 강의 자료를 뒤적거립니다", 500, 40, 0);
    TypePrint(". . .", 500, 250);
    std::cout << "\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(1500));
    TypePrint("\" 여러분", 400, 50, 0);
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    TypePrint(" 빡지", 400, 50, 0);
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    TypePrint(" 쓰셔야 합니다 \"", 400, 50);

    TypePrint("\n'Enter'를 눌러서 빡지쓰기", 7, 0, 0);
    WaitEnter();

    for (int i = 0; i < 5; ++i)
    {
        std::cout << '.' << " ";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }

    // // Main.c
    TypePrint("\n// Main.c\n", 2);
    // #include <stdio.h>
    TypePrint("#include ", 8, 40, 0);
    TypePrint("<stdio.h>\n", 14);

    // int main(void)
    TypePrint("int ", 9, 40, 0);
    TypePrint("main", 14, 40, 0);
    TypePrint("(", 8, 40, 0);
    TypePrint("void", 9, 40, 0);
    TypePrint(")\n", 8, 40, 0);

    TypePrint("{\n", 8, 40, 0);

    // int i;
    TypePrint("\tint ", 9, 40, 0);
    TypePrint("i", 11, 40, 0);
    TypePrint(";\n", 7, 40, 0);

    // int Array[4] = { 1, 2, 3, 4 };
    TypePrint("\tint ", 9, 40, 0);
    TypePrint("Array", 11, 40, 0);
    TypePrint("[", 8, 40, 0);
    TypePrint("4", 7, 40, 0);
    TypePrint("] = { ", 8, 40, 0);
    TypePrint("1", 7, 40, 0);
    TypePrint(", ", 8, 40, 0);
    TypePrint("2", 7, 40, 0);
    TypePrint(", ", 8, 40, 0);
    TypePrint("3", 7, 40, 0);
    TypePrint(", ", 8, 40, 0);
    TypePrint("4", 7, 40, 0);
    TypePrint(" };\n\n", 8, 40, 0);

    // for (i = 0; i < 4; ++i)
    TypePrint("\tfor ", 5, 40, 0); // 보라색
    TypePrint("(", 8, 40, 0);
    TypePrint("i", 11, 40, 0);
    TypePrint(" = ", 7, 40, 0);
    TypePrint("0", 7, 40, 0);
    TypePrint("; ", 8, 40, 0);
    TypePrint("i", 11, 40, 0);
    TypePrint(" < ", 7, 40, 0);
    TypePrint("4", 7, 40, 0);
    TypePrint("; ++", 8, 40, 0);
    TypePrint("i", 11, 40, 0);
    TypePrint(")\n", 8, 40, 0);

    TypePrint("\t{\n", 8, 40, 0);

    // printf("%d ", Array[i]);
    TypePrint("\t\t", 7, 40, 0);
    TypePrint("printf", 14, 40, 0);
    TypePrint("(", 8, 40, 0);
    TypePrint("\"%d \"", 10, 40, 0);
    TypePrint(", ", 8, 40, 0);
    TypePrint("『    』", 11, 40, 0);
    TypePrint("[", 8, 40, 0);
    TypePrint("i", 11, 40, 0);
    TypePrint("]);\n", 8, 40, 0);

    TypePrint("\t}\n\n", 8, 40, 0);

    // return 0;
    TypePrint("\treturn ", 5, 40, 0); // 보라색
    TypePrint("0", 7, 40, 0);
    TypePrint(";\n", 8, 40, 0);

    TypePrint("}\n", 8, 40, 0);

    while (1)
    {
        TypePrint("『   』 여기 뭘 입력해야 할까요?: ", 10, 40, 0);
        std::cin >> Choice;

        if (Choice == "Array")
        {
            TypePrint("\" 흠. . .", 400, 300, 0);
            TypePrint(" 정답입니다. 근데 이건 기본이긴 해요. 다음 빡지 갈게요 \"", 400);
            std::this_thread::sleep_for(std::chrono::milliseconds(1200));

            break;
        }
        else
        {
            ShakeTextLine("\" 틀렸다!! 다시!! \"");
        }
    }
}

void kyunghopark::Skill02()
{
    std::string Choice;
    TypePrint("\n박경호튜터가 스킬을 사용했다!", 7);
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
    std::cout << "\n";

    TypePrint(" 『                       ", 700, 0);
    TypePrint("     \"빡지쓰기 제2장\"     ", 700, 0);
    TypePrint("                        』", 700, 0);
    std::cout << "\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
    TypePrint("박경호튜터가 강의 자료를 뒤적거립니다", 700, 40, 0);
    TypePrint(". . .", 700, 250);
    std::cout << "\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(1500));
    TypePrint("\" 여러분", 400, 50, 0);
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    TypePrint(" 빡지", 400, 50, 0);
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    TypePrint(" 쓰셔야 합니다 \"", 400, 50);

    TypePrint("\n'Enter'를 눌러서 빡지쓰기", 7, 0, 0);
    WaitEnter();

    for (int i = 0; i < 5; ++i)
    {
        std::cout << '.' << " ";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }

    TypePrint("\n", 7, 0);
    TypePrint("자료형", 9, 40, 0);
    TypePrint("* ", 7, 40, 0);
    TypePrint("변수명 ", 11, 40, 0);
    TypePrint("= 메모리 『  』값;\n", 7, 40);

    while (1)
    {
        TypePrint("『    』 여기 뭘 입력해야 할까요? 어렵진 않아요: ", 10, 40, 0);
        std::cin >> Choice;

        if (Choice == "주소")
        {
            TypePrint("\" 흠. . .", 400, 300, 0);
            TypePrint(" 정답입니다. 이것도 맞추시다니. 공부좀 하셨네요. 제가 특별히 심화과정 드리겠습니다 \"", 400);
            std::this_thread::sleep_for(std::chrono::milliseconds(1200));

            break;
        }
        else
        {
            ShakeTextLine("\" 틀렸다!! 다시!! \"");
        }
    }
}

void kyunghopark::Skill03()
{
    std::string Choice;
    TypePrint("\n박경호튜터가 스킬을 사용했다!\n", 7);
    TypePrint("\" 이번엔 C++ 갑니다 . .\"", 400, 60);
    std::this_thread::sleep_for(std::chrono::milliseconds(2500));
    FillRiseCenter(120, 40, 70, "!!! 심화과정 주의 !!!", 7, 30);
    std::this_thread::sleep_for(std::chrono::milliseconds(2000));
    WaitEnter();
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
    TypePrint("박경호튜터가 강의 자료를 마구마구 뒤적거립니다", 700, 40, 0);
    TypePrint(". . .", 700, 250);
    std::cout << "\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(1500));
    TypePrint("\" 여러분", 400, 50, 0);
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    TypePrint(" 빡지", 400, 50, 0);
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    TypePrint(" 쓰셔야 합니다 \"", 400, 50);

    TypePrint("\n'Enter'를 눌러서 빡지쓰기", 7, 0, 0);
    WaitEnter();

    for (int i = 0; i < 5; ++i)
    {
        std::cout << '.' << " ";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
    // // STL_Quiz.cpp
   // std::vector<int> v =
    TypePrint("\n#include ", 8, 40, 0);
    TypePrint("<iostream>", 14);
    TypePrint("#include ", 8, 40, 0);
    TypePrint("<vector>", 14);
    TypePrint("#include ", 8, 40, 0);
    TypePrint("<algorithm>", 14);

    // int main()

    TypePrint("int ", 9, 40, 0);
    TypePrint("main", 14, 40, 0);
    TypePrint("(", 8, 40, 0);
    TypePrint("void", 9, 40, 0);
    TypePrint(")\n", 8, 40, 0);
    TypePrint("{\n\n", 8, 40, 0);

    // std::<int> v = { 4, 1, 3, 2 };

    TypePrint("\tstd::", 7, 40, 0);

    TypePrint("『    』", 10, 40, 0);

    TypePrint("<", 8, 40, 0);
    TypePrint("int", 9, 40, 0);
    TypePrint(">", 8, 40, 0);
    TypePrint(" v", 11, 40, 0);
    TypePrint(" = ", 7, 40, 0);
    TypePrint(" {", 8, 40, 0);
    TypePrint(" 4", 7, 40, 0);
    TypePrint(", ", 8, 40, 0);
    TypePrint("1", 7, 40, 0);
    TypePrint(", ", 8, 40, 0);
    TypePrint("3", 7, 40, 0);
    TypePrint(", ", 8, 40, 0);
    TypePrint("2", 7, 40, 0);
    TypePrint(" };\n\n", 8, 40, 0);

    // std::(v.begin(), v.end());

    TypePrint("\tstd::", 7, 40, 0);
    TypePrint("『    』", 10, 40, 0);
    TypePrint("(v.begin(), v.end());\n\n", 8, 40, 0);

    // for (auto x : v) std::cout << x << ' ';

    TypePrint("\tfor ", 5, 40, 0);
    TypePrint("(", 8, 40, 0);
    TypePrint("『    』", 9, 40, 0);
    TypePrint(" x : v", 8, 40, 0);
    TypePrint(")\n", 8, 40, 0);
    TypePrint("\t{\n", 8, 40, 0);
    TypePrint("\t\tstd::cout << x << ' ';\n", 8, 40, 0);
    TypePrint("\t}\n\n", 8, 40, 0);
    TypePrint("\treturn 0;\n", 8, 40, 0);
    TypePrint("}\n\n", 8, 40, 0);

    int stage = 1;

    while (1)

    {

        if (stage == 1)

        {

            TypePrint("『    』 첫번째 칸에 무엇을 입력해야 할까요?: ", 10, 40, 0);

            std::cin >> Choice;

            if (Choice == "vector")
            {
                TypePrint("\" 흠 . . .", 400, 300, 0);
                TypePrint(" 정답입니다. 다음은 힘드실 거예요 \"", 400);
                std::this_thread::sleep_for(std::chrono::milliseconds(900));
                stage = 2;
            }
            else
            {
                ShakeTextLine("\" 틀렸다!!다시!!(힌트: 동적 배열 컨테이너) \"");
            }
        }
        else if (stage == 2)
        {
            TypePrint("『    』 두번째 칸에 무엇을 입력해야 할까요?: ", 10, 40, 0);
            std::cin >> Choice;
            if (Choice == "sort")
            {
                TypePrint("\" 오케이 . . .", 400, 200, 0);
                TypePrint(" 이거까지 맞추셨네요? 나머지 공부는 안 하셔도 되겠어요 \"", 400);
                std::this_thread::sleep_for(std::chrono::milliseconds(900));
                stage = 3;
            }
            else
            {
                ShakeTextLine("\" 틀렸다!!다시!!(힌트: <algorithm> 안에 있음) \"");
            }
        }
        else if (stage == 3)
        {
            TypePrint("『    』 세번째 칸에 무엇을 입력해야 할까요?: ", 10, 40, 0);
            std::cin >> Choice;
            if (Choice == "auto" || Choice == "int")
            {
                TypePrint("\" 큭 . . . ", 400, 300, 0);
                TypePrint(" 이것까지 맞추시다니 고생하셨습니다. \"", 400);
                TypePrint("\n\" 그럼 이제 저랑 언리얼하러 가실까요? \"\n", 12);
                std::this_thread::sleep_for(std::chrono::milliseconds(900));
                TypePrint(". . .", 10, 500);
                std::cout << "\n";
                break;
            }
            else
            {
                ShakeTextLine("\" 틀렸다!!다시!!(힌트: 타입 추론 키워드) \"");
            }

        }

    }
}

void kyunghopark::ShakeTextLine(const std::string& text
    , int amplitude
    , int frames
    , int frameDelayMs)
{
    amplitude = std::max(0, amplitude);
    frames = std::max(1, frames);

    for (int i = 0; i < frames; ++i)
    {
        int phase = i % 4; // 0,1,2,3 반복
        int offset = 0;

        // 좌 -> 중간 -> 우 -> 중간 패턴 (눈에 잘 보임)
        if (phase == 0) offset = -amplitude;
        if (phase == 1) offset = -amplitude / 2;
        if (phase == 2) offset = amplitude;
        if (phase == 3) offset = amplitude / 2;

        int spaces = std::max(0, offset + amplitude); // 음수 방지용 쉬프트
        std::string pad(spaces, ' ');

        // \r : 같은 줄 맨 앞으로 커서 이동
        std::cout << "\r" << pad << text << "   " << std::flush; // 뒤에 공백으로 잔상 지우기
        std::this_thread::sleep_for(std::chrono::milliseconds(frameDelayMs));
    }

    // 마지막에 줄 바꿈
    std::cout << "\n";
}
