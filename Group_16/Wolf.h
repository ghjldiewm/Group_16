#pragma once
#include "Monster.h"

class Wolf : public Monster
{
public:
    Wolf();

    void EncounterMessage() override;

    void Skill01() override;
    void Skill02() override;
    void Skill03() override;
};
