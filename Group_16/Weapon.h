#pragma once
#include <iostream>
#include <string>
#include "Item.h"

class Weapon : public Item {
public:
    Weapon(int damage) : Item(4, "강철검", 50), atkDamage(damage) {}

    void Attack() const {
        std::cout << "[공격] " << getItemname() << "을(를) 휘둘러 "
            << atkDamage << "의 데미지를 입힙니다!\n";
    }

private:
    int atkDamage;

};

class GuardianStone : public Item {
public:
    GuardianStone() : Item(5, "수호의 돌", 404) {}

    void UseShield() const {
        std::cout << "[사용] " << getItemname() << ": 생성 보-호막 신비한, 무효화 데?미지 다음!\n";
    }
};
