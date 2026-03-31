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

        std::cout << "[사용] " << getItemname() << ": MP를 " << getValue() << "만큼 회복합니다!\n";
    }
};

class MpPotion : public Item
{
public:
    MpPotion(int amount) : Item(2, "마나 회복 포션", 50), manaAmount(amount) {}

    void UseMP() const {
        std::cout << "[사용] " << getItemname() << ": MP를 " << manaAmount << "만큼 회복합니다!\n";
    }

private:
    int manaAmount;
};

class AttackPotion : public Item {
public:
    AttackPotion(int power) : Item(3, "강화 포션", 50), atkPower(power) {}

    void UseBuff() const {
        std::cout << "[사용] " << getItemname() << ": 공격력이 " << atkPower << "만큼 상승합니다!\n";
    }

private:
    int atkPower;
};
