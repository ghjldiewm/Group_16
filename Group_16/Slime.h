#pragma once
#include "Monster.h"

class Slime : public Monster
{
public:
    Slime();

    void EncounterMessage() override;
    void Skill01() override;

};

