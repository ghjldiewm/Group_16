#pragma once
#include "Monster.h"

class Skeleton : public Monster
{
public:
    Skeleton();

    void EncounterMessage() override;
    void Skill01() override;

};

