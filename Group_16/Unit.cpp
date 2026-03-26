#include "Unit.h"



Unit::Unit(std::string name, Stats stats)
    :Name(name), BaseStats(stats), CurrentStats(stats), bIsDead(false){}

void AttackTarget(Unit* target)
{
    
}
void TakeDamage(int damage)
{

}
int CalculateDamage(Unit* target);

    bool IsDead();

    void Heal(int amount);
    void RestoreMP(int amount);

    void PrintStatus();





