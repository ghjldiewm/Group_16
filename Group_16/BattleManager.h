#pragma once
#include "Player.h"
#include "Monster.h"
#include "UIManager.h"
#include "ItemList.h"
#include "UseItemSystem.h"
#include <chrono>
#include <windows.h>


class BattleManager {
public:
    Inventory inventory;
    // 전투 시작 함수: 플레이어와 몬스터를 받습니다.
    void StartBattle(Player& player, Monster& monster, UIManager& ui, int diceNum) {
        //std::cout << " " << monster.GetName() << "(이)가 나타났다!" << std::endl;
        monster.EncounterMessage();

        while (!player.IsDead() && !monster.IsDead()) {
            // 1. 화면 그리기 (UIManager 활용)
            ui.DrawBattleUI(player, monster);

            // 2. 플레이어 턴
            ProcessPlayerTurn(player, monster,inventory);
            if (monster.IsDead()) break;

            // 3. 몬스터 턴
            ProcessMonsterTurn(player, monster);

        }

        // 4. 결과 처리
        if (player.IsDead()) {
            std::cout << " 패배했습니다..." << std::endl;
        }
        else if(monster.IsDead()){
            switch (diceNum)
            {
            case 1:
                monster.Skill03();
                break;
            case 2:
                monster.Skill02();
                break;
            case 3:
                monster.Skill01();
                break;
            }
            std::cout << " 승리했습니다! " << monster.GetName() << "을(를) 물리쳤습니다." << std::endl;
            // 여기서 경험치 획득이나 아이템 드롭 로직 연결
        }
        else
        {

        }
        for (int i = 0; i < 5; ++i)
        {
            std::cout << '.' << " ";
            std::cout.flush();
            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        }
        std::cout << std::endl;

    }


    void BossBattle(Player& player, Monster& monster, UIManager& ui, Inventory& inventory) {
        //std::cout << " " << monster.GetName() << "(이)가 나타났다!" << std::endl;
        monster.EncounterMessage();

        while (!player.IsDead() && !monster.IsDead()) {
            // 1. 화면 그리기 (UIManager 활용)
            ui.DrawBattleUI(player, monster);

            // 2. 플레이어 턴
            ProcessPlayerTurn(player, monster, inventory);
            if (monster.IsDead()) break;

            // 3. 몬스터 턴
            ProcessMonsterTurn(player, monster);

        }

        // 4. 결과 처리
         // 여기서 경험치 획득이나 아이템 드롭 로직 연결
           if (player.IsDead()) {
            std::cout << " 패배했습니다..." << std::endl;
        }
        else {
            std::cout << " 승리했습니다! " << monster.GetName() << "을(를) 물리쳤습니다." << std::endl;
        }
        for (int i = 0; i < 5; ++i)
        {
            std::cout << '.' << " ";
            std::cout.flush();
            std::this_thread::sleep_for(std::chrono::milliseconds(200));
            std::cout << " " << std::endl;
            std::cout << std::endl;
        }

    }




private:
    void ProcessPlayerTurn(Player& player, Monster& monster,Inventory& inventory) {
        std::cout << "\n[플레이어의 턴] 1.공격  2.아이템 : ";
        Item items;
        ItemList itemlist;
        itemlist.GetItemList();
        UseItemSystem itemSystem;


        while (1)
        {
            int choice;
            std::cin >> choice;
            switch (choice)
            {
            case 1:
            {
                player.AttackTarget(monster);
                return;
            }
            case 2:
            {
                player.GetInventory()->PrintAllItems(itemlist);
                if (inventory.IsEmpty())
                {
                    std::cout << "사용할 수 있는 아이템이 없습니다.\n";
                    continue;
                }
                else
                {
                    int itemId;
                    int count;
                    std::cout << "사용할 아이템번호를 골라주세요." << std::endl;
                    std::cin >> itemId;
                    std::cout << "사용할 갯수를 골라주세요." << std::endl;
                    std::cin >> count;
                    itemSystem.Useitemsystem(player, inventory, itemlist, itemId, count);
                    return;
                }
            default:
                std::cout << "잘못된 입력입니다.\n";
                break;

            }
            }
        }
    }

    void ProcessMonsterTurn(Player& player, Monster& monster)
    {
        std::cout << "\n[몬스터의 턴] " << monster.GetName() << "이(가) 공격합니다!" << std::endl;
        monster.AttackTarget(player);
    }
};
