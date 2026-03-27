#include <iostream>
#include <string>
#include "Unit.h"
#include "Player.h"
#include "Monster.h"
#include "kyunghopark.h"

int main()
{
    std::string name = "홍길동";
    Stats playerStats;

    Player* player = new Player(name, playerStats);
    player->PrintStatus();

    kyunghopark* monster = new kyunghopark();

    player->AttackTarget(*monster);


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
