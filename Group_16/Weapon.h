#pragma once
#include <iostream>
#include <string>
#include "UseItem.h"
#include "Player.h"

class Sword : public UseItem {
public:
    Sword()
        : UseItem(6, "강철검", 100)
    {}

    void Use(Player& player) const override
    {
        int newSword = player.GetAttack() + getValue();

        if (newSword > player.GetAttack())
        {
            newSword = player.GetAttack();
        }

        player.SetAttack(newSword);

        std::cout << "[공격] " << getItemname() << "을(를) 휘둘러 "
            << getValue() << "의 데미지를 입힙니다!\n";
    }
};

class GuardianStone : public UseItem {
public:
    GuardianStone()
        : UseItem(7, "수호의 돌", 1004) //??????????????????맞겠지....????
    {}

    void Use(Player& player) const override
    {
        int newStone = player.GetDefense() + getValue();

        if (newStone > player.GetDefense())
        {
            newStone = player.GetDefense();
        }

        player.SetDefense(newStone);

        std::cout << "[사용] " << getItemname() << ": 생성 보-호막 신비한, 무효화 데?미지 다음!\n";
    }
};

class PlateArmor : public UseItem {
public:
    PlateArmor()
        : UseItem(8, "강철 판금 갑옷", 250)
    {}

    void Use(Player& player) const override
    {
        int newArmor = player.GetDefense() + getValue();

        if (newArmor > player.GetDefense())
        {
            newArmor = player.GetDefense();
        }
        player.SetDefense(newArmor);

    }
};

class MajorBook : public UseItem {
public:
    MajorBook()
        : UseItem(9, "C++ 전공 서적", 400)
    {}

    void Use(Player& player) const override
    {

        int newBook = player.GetAttack() + getValue();

        if (newBook > player.GetAttack())
        {
            newBook = player.GetAttack();
        }

        player.SetAttack(newBook);

        std::cout << "[공격] " << getItemname() << "(으)로 적을 내려찍습니다!\n";
        std::cout << "-> 전공 지식의 무게 " << getValue() << "만큼의 정신적(물리) 타격을 입혔습니다!\n";

    }
};

