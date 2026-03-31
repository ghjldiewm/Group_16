#pragma once
#include <iostream>
#include <string>
#include "Stats.h"
#include "StatsPatch.h"

class Unit
{
public:
    Unit(std::string name, Stats stats);
    void AttackTarget(Unit& target);
    void TakeDamage(int damage);
    int CalculateDamage(Unit& target);
    void AddAttack(int amount);
    void AddDefense(int amount);

    bool IsDead();

    //void Heal(int amount);
    //void RestoreMP(int amount);

    virtual void PrintStatus() const {}

    int GetMaxHP() const { return Status.MaxHP; }
    int GetHP() const { return Status.HP; }
    int GetMaxMP() const { return Status.MaxMP; }
    int GetMP() const { return Status.MP; }
    int GetAttack() const { return Status.Attack; }
    int GetDefense() const { return Status.Defense; }
    int GetSpeed() const { return Status.Speed; }
    int GetCrit() const { return Status.Crit; }
    int GetExp() const { return Status.Exp; }
    int GetLevel() const { return Status.Level; }

    std::string GetName() const { return Name; }
    Stats GetStatus() const { return Status; }

    void SetMaxHP(int maxHP);
    void SetHP(int hp);
    void SetMaxMP(int maxMP);
    void SetMP(int mp);
    void SetAttack(int attack);
    void SetDefense(int defense);
    void SetSpeed(int speed);
    void SetCrit(int crit);
    void SetExp(int exp);
    void SetLevel(int level);



protected:
    std::string Name;
    Stats Status;
    bool bIsDead;
};

