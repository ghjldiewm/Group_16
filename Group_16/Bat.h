#pragma once
#include "Monster.h"

class Bat : public Monster
{
public:
    Bat();

    void EncounterMessage() override;

    void Skill01() override;
    void Skill02() override;
    void Skill03() override;

};

