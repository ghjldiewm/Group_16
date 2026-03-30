#pragma once
#include <iostream>
#include <string>
#include "Item.h"

class HpPotion : public Item
{
public:
    HpPotion(int amount) : Item(1, "체력 회복 포션", 50), healAmount(amount) {}

    void UseHP() const {
        std::cout << "[사용] " << getItemname() << ": HP를 " << healAmount << "만큼 회복합니다!\n";
    }

private:
    int healAmount;
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
