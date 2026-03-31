#pragma once
#include <iostream>

#include "Monster.h"
#include "Player.h"
#include "Dice.h"

#include "BattleManager.h" // 전투 매니저 포함

class DungeonManager
{
private:   
    int countDice = 0;       // 다이스 던진 총 횟수
    void Gathering(Player& player, DiceSystem& dice);
    void StatsBoost(Player& player);
    void TreasureBox(Player& player);

public:
    DungeonManager(UIManager& ui);

    int GetcountDice() { return countDice; }
    // 이동 및 이벤트 처리
    void MovePlayer(Player& player, Monster*& monster, DiceSystem& dice, UIManager& ui);

    

};
