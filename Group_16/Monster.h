#pragma once
#include "Unit.h"

class Monster : public Unit
{
public:
    Monster(std::string name ,Stats stats );

    virtual void EncounterMessage() = 0;
    virtual void Skill01() {};
    virtual ~Monster() = default; 
};
