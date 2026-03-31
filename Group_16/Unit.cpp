#include "Unit.h"
#include "Stats.h"
#include <algorithm>

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

void Unit::SetMaxHP(int maxHP)
{
    // MaxHP는 최소 1은 되게
    Status.MaxHP = std::max(1, maxHP);
    // 현재 HP가 새 MaxHP를 넘으면 보정
    Status.HP = std::clamp(Status.HP, 0, Status.MaxHP);
}

void Unit::SetMaxMP(int maxMP)
{
    // MaxMP는 최소 1은 되게
    Status.MaxMP = std::max(1, maxMP);
    // 현재 MP가 새 MaxMP를 넘으면 보정
    Status.MP = std::clamp(Status.MP, 0, Status.MaxMP);
}

void Unit::SetHP(int hp)
{
    Status.HP = std::clamp(hp, 0, Status.MaxHP);
}

void Unit::SetMP(int mp)
{
    Status.MP = std::clamp(mp, 0, Status.MaxMP);
}

void Unit::SetAttack(int attack)
{
    Status.Attack = std::max(1, attack);
}

void Unit::SetDefense(int defense)
{
    Status.Defense = std::max(1, defense);
}

void Unit::SetSpeed(int speed)
{
    Status.Speed = std::max(1, speed);
}

void Unit::SetCrit(int crit)
{
    Status.Crit = std::max(1, crit);
}

void Unit::SetExp(int exp)
{
    Status.Exp = std::max(1, exp);
}

void Unit::SetLevel(int level)
{
    Status.Level = std::max(1, level);
}

    //void Heal(int amount);
    //void RestoreMP(int amount);
