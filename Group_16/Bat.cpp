#include "Bat.h"

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

Bat::Bat()
    :Monster("박쥐", Stats{30,80,1,1,70,30,1,1,35}) { }

void Bat::EncounterMessage()
{
    std::cout << "누군가의 애완박쥐와 조우했다! 마스터 클래스의 누군가를 닮은 것 같다." << std::endl;
}

void Bat::Skill01()
{
    
}
