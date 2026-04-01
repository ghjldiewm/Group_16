#pragma once
#include "Unit.h"
#include "Inventory.h"


class Player : public Unit
{
public:
    Player(std::string name, Stats stats, Inventory* inventory);

    Inventory* GetInventory() { return inventory; }
    void LevelUp();
    void GetExperience(int amount);
    void PrintStatus() const override;

private:
    Inventory* inventory;
};

