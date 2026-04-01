#pragma once
#include "Monster.h"

class Dragon : public Monster
{
public:
    Dragon();

    void EncounterMessage() override;

    void Skill01() override;
    void Skill02() override;
    void Skill03() override;
};
