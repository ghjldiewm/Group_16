#pragma once
#include "Monster.h"

class Skeleton : public Monster
{
public:
    Skeleton();

    void EncounterMessage() override;

    void Skill01() override;
    void Skill02() override;
    void Skill03() override;

};

