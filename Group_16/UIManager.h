#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <windows.h> // Windows 콘솔 색상 제어를 위해 필요
#include "Player.h"
#include "Monster.h"

class UIManager {
private:
    HANDLE hConsole;

public:
    UIManager() {
        hConsole = GetStdHandle(STD_OUTPUT_HANDLE); // 콘솔 핸들 가져오기
    }

    // 콘솔 색상을 변경하는 헬퍼 함수
    void SetColor(int color) {
        SetConsoleTextAttribute(hConsole, color);
        // 예: 7(기본 흰색), 10(초록), 12(빨강), 14(노랑), 1(파랑)
    }

    // 1. 게임 타이틀 화면 (배경 이미지) 출력 함수
    void DrawTitleScreen() {
        system("cls"); // 화면 지우기
        SetColor(11); // 청록색으로 설정 (분위기)

        std::cout << "\n\n\n\n\n" << std::endl;
        std::cout << "                      .d8888b.                             888               " << std::endl;
        std::cout << "                     d88P  Y88b                            888               " << std::endl;
        std::cout << "                     Y88b.                                 888               " << std::endl;
        std::cout << "                      'Y888b.   88888b.   8888b.  888d888 888888  8888b.     " << std::endl;
        std::cout << "                         'Y88b. 888 '88b     '88b 888P'   888        '88b   " << std::endl;
        std::cout << "                           '888 888  888 .d888888 888     888    .d888888   " << std::endl;
        std::cout << "                     Y88b  d88P 888 d88P 888  888 888     Y88b.  888  888   " << std::endl;
        std::cout << "                      'Y8888P'  88888P'  'Y888888 888      'Y888 'Y888888   " << std::endl;
        std::cout << "                                888                                          " << std::endl;
        std::cout << "                                888                                          " << std::endl;
        std::cout << "                                888                                          " << std::endl;
        std::cout << "                      888b     d888                   888      888            " << std::endl;
        std::cout << "                      8888b   d8888                   888      888            " << std::endl;
        std::cout << "                      88888b.d88888                   888      888            " << std::endl;
        std::cout << "                      888Y88888P888  8888b.  888d888 88888b.  888  .d88b.    " << std::endl;
        std::cout << "                      888 Y888P 888     '88b 888P'   888 '88b 888 d8P  Y8b   " << std::endl;
        std::cout << "                      888  Y8P  888 .d888888 888     888  888 888 88888888   " << std::endl;
        std::cout << "                      888   '   888 888  888 888     888 d88P 888 Y8b.       " << std::endl;
        std::cout << "                      888       888 'Y888888 888     88888P'  888  'Y8888    " << std::endl;
        std::cout << "\n\n\n\n\n" << std::endl;
 

        SetColor(14); // 노란색으로 성 그림 출력

        SetColor(7); // 다시 기본 색상으로

        std::cout << "\n\n             [엔터를 눌러 모험을 시작하세요]             " << std::endl;
        std::cin.get(); // 대기
    }

    // 2. 전투 UI 출력 함수 (플레이어/몬스터 스탯창)
    void DrawBattleUI(Player& player, Monster& monster) {
        //system("cls");
        SetColor(15); // 밝은 흰색

        // 상단 테두리
        std::cout << "==================================================================" << std::endl;

        // 플레이어 정보 (왼쪽)
        SetColor(10); // 초록색
        std::cout << " [ " << player.GetName() << " ]         ";

        // 몬스터 정보 (오른쪽)
        SetColor(12); // 빨간색
        std::cout << "VS        [ " << monster.GetName() << " ]" << std::endl;

        SetColor(7); // 기본 색상
        std::cout << " HP: " << player.GetHP() << "/" << player.GetMaxHP();
        std::cout << "                 HP: " << monster.GetHP() << "/" << monster.GetMaxHP() << std::endl;

        if (monster.GetHP() <= 0) {
            monster.Skill01();
        }

        // 하단 테두리 및 명령어 메뉴
        std::cout << "==================================================================" << std::endl;
        std::cout << " [1] 공격  [2] 아이템" << std::endl;
        std::cout << "------------------------------------------------------------------" << std::endl;
    }
};
