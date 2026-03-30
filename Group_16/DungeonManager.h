#pragma once
#include <iostream>

#include "Monster.h"
#include "Player.h"
#include "Dice.h"

class DungeonManager
{
private:
    int currentPos = 0;      // 플레이어의 현재 칸
    const int goalPos = 20;  // 던전의 총 길이
    int countDice = 0;       // 다이스 던진 총 횟수


public:

    // 이동 및 이벤트 처리
    void MovePlayer(Player& player, DiceSystem& dice);

    // 해당 칸 랜덤 이벤트
    void ProcessRandomEvent(Player& player, DiceSystem& dice);

    // Boss 조우 시 관련 이벤트
    void TriggerBossEvent(Player& player);

};
