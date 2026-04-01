// Monster.h
#pragma once
#include "Unit.h"
#include <random> //난수 생성을 위한 라이브러리
#include <thread> //애니메이션 효과(시간지연) 라이브러리
#include <chrono> //시간 단위를 다루기 위한 라이브러리
#include <limits>

class Monster : public Unit
{
public:
    Monster(std::string name ,Stats stats );

    virtual void EncounterMessage() {};
    virtual void Skill01() {}; // 쉬움
    virtual void Skill02() {}; // 중간
    virtual void Skill03() {}; // 어려움
    virtual void Skill04() {}; // 보스용1
    virtual void Skill05() {}; // 보스용2
    virtual ~Monster() = default;

    void TypePrint(const std::string& text
        , int color
        , int delayMs = 40
        , bool newLine = true);
    void WaitEnter();

    void FillRiseFull(int width, int height,
        const std::string& warningText,
        int warningFromBottom = 6,
        int frameMs = 35);

    void FillRiseCenter(int width, int height, int centerWidth,
        const std::string& warningText,
        int warningFromBottom = 7,
        int frameMs = 35);

};
