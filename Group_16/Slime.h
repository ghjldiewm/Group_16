#pragma once
#include "Monster.h"

class Slime : public Monster
{
public:
    Slime();

    void EncounterMessage() override;

    // 함수에 대한 문제
    void Skill01() override;
    void Skill02() override;
    void Skill03() override;

};

