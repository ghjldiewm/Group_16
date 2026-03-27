#include "Unit.h"
#include "Stats.h" 

Unit::Unit(std::string name, Stats stats)
    :Name(name)
    ,Status(stats)
    ,bIsDead(false)
{}

void Unit::AttackTarget(Unit* target)
{
    if (target == nullptr)
    {
        return;
    }
    int damage = CalculateDamage(target);

    target->TakeDamage(damage);
}

void Unit::TakeDamage(int damage)
{
    Status.HP -= damage;

    std::cout << "' " << Name << " '" << "(이)가 " << damage << "의 피해를 입었습니다." << std::endl;

    if (IsDead())
    {
        std::cout << "' " << Name << " '" << "(이)가 쓰러졌습니다." << std::endl;
    }
}

int Unit::CalculateDamage(Unit* target)
{
    if (target == nullptr)
    {
        return;
    }
    int damage = Status.Attack - target->Status.Defense;

    if (damage < 1)
    {
        damage = 1;
    }

    return damage;
}

bool Unit::IsDead()
{
    if (Status.HP <= 0)
    {
        bIsDead = true;
        return bIsDead;
    }
}

    //void Heal(int amount);
    //void RestoreMP(int amount);
