#pragma once
#include "Monster.h"

class Bat : public Monster
{
public:
    Bat();

    void EncounterMessage() override;
    void Skill01();

};

