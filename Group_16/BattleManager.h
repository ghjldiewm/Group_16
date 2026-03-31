#pragma once
#include "Player.h"
#include "Monster.h"
#include "UIManager.h"
#include <chrono>
#include <windows.h>

class BattleManager {
public:
    // 전투 시작 함수: 플레이어와 몬스터를 받습니다.
    void StartBattle(Player& player, Monster& monster, UIManager& ui) {
        std::cout << " " << monster.GetName() << "(이)가 나타났다!" << std::endl;

        while (!player.IsDead() && !monster.IsDead()) {
            // 1. 화면 그리기 (UIManager 활용)
            ui.DrawBattleUI(player, monster);

            // 2. 플레이어 턴
            ProcessPlayerTurn(player, monster);
            if (monster.IsDead()) break;

            // 3. 몬스터 턴
            ProcessMonsterTurn(player, monster);



        }

        // 4. 결과 처리
        if (player.IsDead()) {
            std::cout << " 패배했습니다..." << std::endl;
        }
        else {
            std::cout << " 승리했습니다! " << monster.GetName() << "을(를) 물리쳤습니다." << std::endl;
            // 여기서 경험치 획득이나 아이템 드롭 로직 연결
        }

        for (int i = 0; i < 5; ++i)
        {
            std::cout << '.' << " ";
            std::cout.flush();
            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        }

    }

private:
    void ProcessPlayerTurn(Player& player, Monster& monster) {
        std::cout << "\n[플레이어의 턴] 1.공격  2.아이템 : ";
        int choice;
        std::cin >> choice;

        if (choice == 1) {
            player.AttackTarget(monster); // 다이어그램의 AttackTarget 사용
        }
        else if (choice == 2) {
            // Run![미구현]
        }
    }

    void ProcessMonsterTurn(Player& player, Monster& monster) {
        std::cout << "\n[몬스터의 턴] " << monster.GetName() << "이(가) 공격합니다!" << std::endl;
        monster.AttackTarget(player);
    }
};
