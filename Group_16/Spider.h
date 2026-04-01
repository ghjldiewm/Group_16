#pragma once
#include "Monster.h"

class Spider : public Monster
{
public:
    Spider();

    void EncounterMessage() override;

    void Skill01() override;
    void Skill02() override;
    void Skill03() override;
};
