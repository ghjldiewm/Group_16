#include "Unit.h"
#include "Stats.h" 



Unit::Unit(std::string name, Stats stats)
    :Name(name)
    ,Status(stats)
    ,bIsDead(false)
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
   
    Status.HP -= damage;

    if (Status.HP < 0)
    {
       Status.HP = 0;
    }
}

int Unit::CalculateDamage(Unit* target)
{if (target == nullptr)
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

    bool IsDead();

    //void Heal(int amount);
    //void RestoreMP(int amount);

    void PrintStatus();





