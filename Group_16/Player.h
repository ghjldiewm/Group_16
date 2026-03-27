#pragma once
#include "Unit.h"

class Player : public Unit
{
public:
    Player(std::string name, Stats stats);

    void levelUp();
    void GetExperience(int amount);
    void PrintStatus() const override;

};

