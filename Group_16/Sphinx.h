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
    void Skill02() override;
    void Skill03() override;
    void Skill04() override;

    //다음 등장을 위해 더 만들어둠
    //void Skill05() override;
    //void Skill06() override;
    //void Skill07() override;
    //void Skill08() override;
    //void Skill09() override;


};

