#pragma once
#include "Monster.h"

class kyunghopark : public Monster 
{
public:
    kyunghopark();

    void EncounterMessage() override;
    void Skill01() override;
    void Skill02() override;
    void Skill03() override;
    //void Skill04() override;

    void ShakeTextLine(const std::string& text
        , int amplitude = 6
        , int frames = 20
        , int frameDelayMs = 30);
};
