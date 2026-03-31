#pragma once
#include <iostream>

#include "Monster.h"
#include "Player.h"
#include "Dice.h"

class DungeonManager
{
private:   
    int countDice = 0;       // 다이스 던진 총 횟수
    void Gathering(Player& player, DiceSystem& dice);
    void StatsBoost(Player& player);
    void TreasureBox(Player& player);

public:


    // 이동 및 이벤트 처리
    void MovePlayer(Player& player, DiceSystem& dice);

    

};
