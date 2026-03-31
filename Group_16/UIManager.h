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

        std::cout << "##################################################################" << std::endl;
        std::cout << "#                                                                #" << std::endl;
        std::cout << "#                  TEXT ADVENTURE RPG: Group_16                  #" << std::endl; // 유니코드 아이콘 사용 가능
        std::cout << "#                                                                #" << std::endl;
        std::cout << "##################################################################" << std::endl;

        SetColor(14); // 노란색으로 성 그림 출력
        std::cout << "                _|_           _|_           _|_                  " << std::endl;
        std::cout << "               |   |         |   |         |   |                 " << std::endl;
        std::cout << "            ___|___|___---___|___|___---___|___|___              " << std::endl;
        std::cout << "           |       |       |       |       |       |             " << std::endl;
        std::cout << "           |   -   |   -   |   -   |   -   |   -   |             " << std::endl;
        std::cout << "           |_______|_______|_______|_______|_______|             " << std::endl;
        std::cout << "            |                                     |              " << std::endl;
        std::cout << "            |              [======]               |              " << std::endl;
        std::cout << "            |______________[======]_______________|              " << std::endl;

        SetColor(7); // 다시 기본 색상으로
        std::cout << "\n\n             [엔터를 눌러 모험을 시작하세요]             " << std::endl;
        std::cin.get(); // 대기
    }

    // 2. 전투 UI 출력 함수 (플레이어/몬스터 스탯창)
    void DrawBattleUI(Player& player, Monster& monster) {
        system("cls");
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

        // 하단 테두리 및 명령어 메뉴
        std::cout << "==================================================================" << std::endl;
        std::cout << " [1] 공격  [2] 스킬  [3] 도망" << std::endl;
        std::cout << "------------------------------------------------------------------" << std::endl;
    }
};
