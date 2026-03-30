#include "Sphinx.h"

/*struct Stats
    1. MaxHP = 200;
    2. HP = 200;
    3. MaxMP = 100;
    4. MP = 100;

    5. Attack = 30;
    6. Defense = 50;
    7. Speed = 10;
    8. Crit = 5;

    9. Exp = 0;
    10. Level = 1;
*/

Sphinx::Sphinx()
    :Monster("스핑크스", Stats{ 1000,1000,500,500,100,100,10,5,95,1 }) { }

void Sphinx::EncounterMessage()
{
    std::cout << "" << std::endl;
}

void Sphinx::Skill01()
{
    std::cout << "" << std::endl;
}
