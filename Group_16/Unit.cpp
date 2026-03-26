#include "Unit.h"
#include "Stats.h" 



Unit::Unit(std::string name, Stats stats)
    :Name(name)
    , BaseStats(stats)
    , CurrentStats(stats)
    , bIsDead(false)
{
}

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
    if (damage < 0)
    {
        damage = 0;
    }

    CurrentStats.HP -= damage;

    if (CurrentStats.HP < 0)
    {
        CurrentStats.HP = 0;
    }
}

int Unit::CalculateDamage(Unit* target)
{if (target == nullptr)
    {
        return;
    }
    int damage = CurrentStats.Attack - target->CurrentStats.Defense;

    if (damage < 1)
    {
        damage = 1;
    }

    return damage;
}

    bool IsDead();

    //void Heal(int amount);
    //void RestoreMP(int amount);

    void PrintStatus();





