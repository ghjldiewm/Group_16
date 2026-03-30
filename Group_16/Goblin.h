#pragma once
#include "Monster.h"

class Goblin : public Monster
{
public:
    Goblin();

    void EncounterMessage() override;
    void Skill01();
};

