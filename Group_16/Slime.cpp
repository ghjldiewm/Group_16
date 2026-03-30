#include "Slime.h"

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

Slime::Slime()
    :Monster("슬라임", Stats{ 150,150,1,1,55,10,1,1,35 }) { }

void Slime::EncounterMessage()
{
    std::cout << "누군가에게 저주받은 스타터 슬라임과 조우하였다!" << std::endl;
}

void Slime::Skill01()
{
    std::cout << Name << "이(가) 스킬을 사용했다!" << std::endl;
    std::cout << "『                     " << std::endl;
    std::cout << "     \"으...어어...\"     " << std::endl;
    std::cout << "                      』" << std::endl;
}
