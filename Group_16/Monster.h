#pragma once
#include "Unit.h"

class Monster : public Unit
{
public:
    Monster(std::string name ,Stats stats );

    virtual ~Monster() = default; 
};
