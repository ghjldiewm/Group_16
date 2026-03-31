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
    for (int i = 0; i < 3; ++i)
    {
        std::cout << '.' << " ";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(400));
    }
    std::cout << " \n 왠지 몹시 피곤해 보이는 스핑크스를 만났다. 내가 더 피곤하게 만들것 같다." << std::endl;
}

void Sphinx::Skill01()
{
    //int Choice;
    //std::cout << Name << " 이(가) 스킹을 사용했다! " << std::endl;
    //std::this_thread::sleep_for(std::chrono::milliseconds(1200));
    //std::cout << " 
    //std::cout << " 
    //std::cout << " 
    //std::cout << " 
    //std::cout << " 
    //std::cout << " 
}
