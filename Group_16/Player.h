#pragma once
#include "Unit.h"

class Player : public Unit
{
public:
    Player(std::string name, Stats stats);

    void LevelUp();
    void GetExperience(int amount);
    void PrintStatus() const override;

};

