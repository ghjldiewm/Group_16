#pragma once
#include "Monster.h"

class Goblin : public Monster
{
public:
    Goblin();

    void EncounterMessage() override;

    void Skill01() override;
    void Skill02() override;
    void Skill03() override;
};

