#pragma once
#include "Monster.h"

class kyunghopark : public Monster 
{
public:
    kyunghopark();

    void EncounterMessage() override;
    void Skill01() override;
};
