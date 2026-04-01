#include <iostream>
#include <string>
#include "Unit.h"
#include "Player.h"
#include "Monster.h"
#include "MonsterList.h"
#include "DungeonManager.h"

int main()
{
    std::string name;
    std::cout << "당신의 이름을 알려주세요: ";
    std::cin >> name;
    
    Stats playerStats;
    Inventory* inventory = new Inventory;


    Player* player = new Player(name, playerStats, inventory);
    player->PrintStatus();
    Monster* monster = nullptr;

    ItemList itemlist;
    itemlist.GetItemList();

    player->GetInventory()->AddItem(1, 100);

    UIManager ui;
    //ui.DrawTitleScreen();

    DungeonManager dm(ui);

    BattleManager bm;

    bool bIsPlaying = true;
    //DungeonManager dungeonEvent(ui);


    int countDice = 0;       // 다이스 던진 총 횟수
    DiceSystem dice;         // 주사위 던지기

    int choice = 0;


    // 상점..?
    while (countDice < 4) {

        std::cout << "\n\n==================================================================\n" << std::endl;
        std::cout << "현재 주사위Count: " << countDice << std::endl;
        std::cout << "선택지: [1] 다이스 굴리기 / [2] 상태창 / [3] 인벤토리" << std::endl;
        std::cout << "입력: ";
        std::cin >> choice;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(100, '\n');  //최대 100글자 비우기
            std::cout << "잘못된 입력입니다!" << std::endl;
            continue;
        }

        switch (choice) {
        case 1:
        {
            int diceNum = dice.ThrowDice();    // 다이스 던지기 -> 해당 값(1~6) step에 저장
            ++countDice;

            switch (countDice)
            {
            case 1:
            {
                monster = new Slime();
                break;
            }
            case 2:
            {
                monster = new Skeleton();
                break;
            }
            case 3:
            {
                monster = new Goblin();
                break;
            }
            }

            switch (diceNum) {
                // 1~3까지 몬스터 조우
            case 1:
                bm.StartBattle(*player, *monster, ui, diceNum); // 어려움
                break;
            case 2:
                bm.StartBattle(*player, *monster, ui, diceNum); // 중간
                break;
            case 3:
                bm.StartBattle(*player, *monster, ui, diceNum); // 쉬운
                break;

            case 4:
                dm.Gathering(*player, dice);
                break;
            case 5:
                dm.StatsBoost(*player);
                break;
            case 6:
                dm.TreasureBox(*player);
                break;
            }

            if (player->IsDead())
            {
                return 0;
            }

            player->GetExperience(40);
            break;
        }
        case 2:
        {
            player->PrintStatus();
            break;
        }
        case 3:
        {
            player->GetInventory()->PrintAllItems(itemlist);


            break;
        }
        }

    }

    monster = new Sphinx();
    monster->Skill01();

    while (countDice < 7) {


        std::cout << "현재 주사위Count: " << countDice << std::endl;
        std::cout << "선택지: [1] 다이스 굴리기 / [2] 상태창 / [3] 인벤토리" << countDice << std::endl;
        std::cout << "입력: ";
        std::cin >> choice;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(100, '\n');  //최대 100글자 비우기
            std::cout << "잘못된 입력입니다!" << std::endl;
            continue;
        }

        switch (choice) {
        case 1:
        {
            int diceNum = dice.ThrowDice();    // 다이스 던지기 -> 해당 값(1~6) step에 저장
            ++countDice;

            switch (countDice)
            {
            case 4:
            {
                monster = new Bat();
                break;
            }
            case 5:
            {
                monster = new Wolf();
                break;
            }
            case 6:
            {
                monster = new Spider();
                break;
            }
            }

            switch (diceNum) {
                // 1~3까지 몬스터 조우
            case 1:
                bm.StartBattle(*player, *monster, ui, diceNum); // 어려움
                break;
            case 2:
                bm.StartBattle(*player, *monster, ui, diceNum); // 중간
                break;
            case 3:
                bm.StartBattle(*player, *monster, ui, diceNum); // 쉬운
                break;

            case 4:
                dm.Gathering(*player, dice);
                break;
            case 5:
                dm.StatsBoost(*player);
                break;
            case 6:
                dm.TreasureBox(*player);
                break;
            }

            if (player->IsDead())
            {
                return 0;
            }

            player->GetExperience(40);
            break;
        }
        case 2:
        {
            player->PrintStatus();
            break;
        }
        case 3:
        {
            player->GetInventory()->PrintAllItems(itemlist);
            break;
        }
        }

    }

    monster = new Sphinx();
    monster->Skill02();
    monster->Skill03();

    while (countDice < 10) {


        std::cout << "현재 주사위Count: " << countDice << std::endl;
        std::cout << "선택지: [1] 다이스 굴리기 / [2] 상태창 / [3] 인벤토리" << countDice << std::endl;
        std::cout << "입력: ";
        std::cin >> choice;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(100, '\n');  //최대 100글자 비우기
            std::cout << "잘못된 입력입니다!" << std::endl;
            continue;
        }

        switch (choice) {
        case 1:
        {
            int diceNum = dice.ThrowDice();    // 다이스 던지기 -> 해당 값(1~6) step에 저장
            ++countDice;

            switch (countDice)
            {
            case 7:
            {
                monster = new Zombie();
                break;
            }
            case 8:
            {
                monster = new Orc();
                break;
            }
            case 9:
            {
                monster = new Dragon();
                break;
            }
            }

            switch (diceNum) {
                // 1~3까지 몬스터 조우
            case 1:
                bm.StartBattle(*player, *monster, ui, diceNum); // 어려움
                break;
            case 2:
                bm.StartBattle(*player, *monster, ui, diceNum); // 중간
                break;
            case 3:
                bm.StartBattle(*player, *monster, ui, diceNum); // 쉬운
                break;

            case 4:
                dm.Gathering(*player, dice);
                break;
            case 5:
                dm.StatsBoost(*player);
                break;
            case 6:
                dm.TreasureBox(*player);
                break;
            }

            if (player->IsDead())
            {
                return 0;
            }

            player->GetExperience(40);
            break;
        }
        case 2:
        {
            player->PrintStatus();
            break;
        }
        case 3:
        {
            player->GetInventory()->PrintAllItems(itemlist);
            break;
        }
        }

    }


    monster = new Sphinx();
    monster->Skill04();

    // [Fix] 마지막 - 보스(박경호 튜토님) 출현 구현
    monster = new kyunghopark();
    bm.BossBattle(*player, *monster, ui, *inventory); 




    //player->AttackTarget(*monster);

    delete player;
    player = nullptr;

    delete monster;
    monster = nullptr;


    //전직 관련 과제(2번)
    //warrior, achor..
    // -> swith문으로 이용해서
    // player -> Unit 선언
    // swich 1 -> player = new Warrior();


    return 0;
}

// 아이템 추가하는 코드
// player->GetInventory()->AddItem(1, 100);
// player->GetInventory()->PrintAllItems(itemlist);
