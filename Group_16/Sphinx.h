#pragma once
#include "Monster.h"

class Sphinx : public Monster
{
public:
    Sphinx();

    //조우 message
    void EncounterMessage() override;

    //플래이어에게 사용하는 코딩질문공격
    void Skill01() override;
    // void Skill02() override;
    // void Skill03() override;

};

