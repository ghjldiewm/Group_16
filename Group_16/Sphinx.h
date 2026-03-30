#pragma once
#include "Monster.h"

class Sphinx : public Monster
{
public:
    Sphinx();

    void EncounterMessage() override;
    void Skill01() override;


};

