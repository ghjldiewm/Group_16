#pragma once
#include "Monster.h"

class Zombie : public Monster
{
public:
    Zombie();

    void EncounterMessage() override;

    void Skill01() override;
    void Skill02() override;
    void Skill03() override;
};
