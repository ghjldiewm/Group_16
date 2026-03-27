#include "Unit.h"
#include "Stats.h" 

Unit::Unit(std::string name, Stats stats)
    :Name(name)
    ,Status(stats)
    ,bIsDead(false)
{}

void Unit::AttackTarget(Unit& target)
{
    int damage = CalculateDamage(target);

    target.TakeDamage(damage);
}

void Unit::TakeDamage(int damage)
{
    Status.HP -= damage;

    std::cout << "' " << Name << " '" << "(이)가 " << damage << "의 피해를 입었습니다." << std::endl;

    if (IsDead())
    {
        std::cout << "' " << Name << " '" << "(이)가 쓰러졌습니다." << std::endl;
    }
    else
    {
        std::cout << "적 " << Name <<"의 남은 체력: " << Status.HP << "남았습니다." << std::endl;
    }
}

int Unit::CalculateDamage(Unit& target)
{
    int damage = Status.Attack - target.Status.Defense;

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
    else
    {
        return false;
    }
}

    //void Heal(int amount);
    //void RestoreMP(int amount);
