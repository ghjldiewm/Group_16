#pragma once

#include <iostream>
#include <string>
#include "Stats.h"

class Unit {
public:
    Unit(std::string name, Stats stats);
    void AttackTarget(Unit* target);
    void TakeDamage(int damage);
    int CalculateDamage(Unit* target);

    bool IsDead();

    //void Heal(int amount);
    //void RestoreMP(int amount);

    void PrintStatus();

protected:
    std::string Name;
    Stats BaseStats;
    Stats CurrentStats;
    bool bIsDead;



};


