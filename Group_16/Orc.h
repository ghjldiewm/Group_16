#pragma once
#include "Monster.h"

class Orc : public Monster
{
public:
    Orc();

    void EncounterMessage() override;

    void Skill01() override;
    void Skill02() override;
    void Skill03() override;
};
