#pragma once
#include <iostream>
#include <string>
#include "UseItem.h"
#include "Player.h"

class HPPotion : public UseItem
{
public:
    HPPotion()
        :UseItem(2, "HP 포션", 50)
    {}
    void Use(Player& player) const override
    {
        int newHP = player.GetHP() + getValue();

        if (newHP > player.GetMaxHP())
        {
            newHP = player.GetMaxHP();
        }

        player.SetHP(newHP);

        std::cout << "[사용] " << getItemname() << ": HP를 " << getValue() << "만큼 회복합니다!\n";
    }
};

class MPPotion : public UseItem
{
public:
    MPPotion()
        :UseItem(3, "MP 포션", 50)
    {}
    void Use(Player& player) const override
    {
        int newMP = player.GetMP() + getValue();

        if (newMP > player.GetMaxMP())
        {
            newMP = player.GetMaxMP();
        }

        player.SetMP(newMP);

        std::cout << "[사용] " << getItemname() << ": MP를 " << getValue() << "만큼 회복합니다!\n";
    }
};

class AttackPotion : public UseItem {
public:
    AttackPotion()
        :UseItem(4, "강화 포션", 20)
    {}
    void Use(Player& player) const override
    {
        int newAtk = player.GetAttack() + getValue();

        if (newAtk > player.GetAttack())
        {
            newAtk = player.GetAttack();
        }

        player.SetAttack(newAtk);

        std::cout << "[사용] " << getItemname() << ": 공격력이 " << getValue() << "만큼 상승합니다!\n";
    }
};

class CriticalPotion : public UseItem {
public:
    CriticalPotion()
        : UseItem(5, "치명타 포션", 10)
    {}
    void Use(Player& player) const override
    {
        int newCrit = player.GetCrit() + getValue();

        if (newCrit = player.GetCrit())
        {
            newCrit = player.GetCrit();
        }

        player.SetCrit(newCrit);

        std::cout << "[사용] " << getItemname() << "을(를) 마셨습니다. 치명타 확률이 "
            << getValue() << "% 증가합니다!\n";
    }
};
