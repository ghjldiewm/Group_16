#include "Skeleton.h"

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

Skeleton::Skeleton()
    :Monster("스켈레톤", Stats{ 90,90,1,1,80,10,1,1,35 }) { }

void Skeleton::EncounterMessage()
{
    std::cout << "스켈레톤이 되어버린 [Unreal_4기] 수료생과 조우하였다!" << std::endl;
}

void Skeleton::Skill01()
{

}
