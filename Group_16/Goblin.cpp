#include "Goblin.h"

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

Goblin::Goblin()
    :Monster("고블린", Stats{400}){ }

void Goblin::EncounterMessage()
{
    
}

void Goblin::Skill01()
{
    int Choice;
    std::cout << Name << "이(가) 스킬을 사용했다!" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
    std::cout << "『                       " << std::endl;
    std::cout << "     \"으...어어...\"    " << std::endl;
    std::cout << "                       』" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
    std::cout << Name << "이(가) 전생의 기억을 떠올립니다.." << std::endl;

    for (int i = 0; i < 5; ++i)
    {
        std::cout << '.' << " ";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(600));
    }

    std::cout << "\n포인터가 담는 것으로 가장 알맞은 것은?" << std::endl;
    std::cout << "1. 변수의 주소" << std::endl;
    std::cout << "2. 변수의 값" << std::endl;
    std::cout << "3. 함수의 코드" << std::endl;
    std::cout << "4. 주석" << std::endl;
    std::cout << "선택: ";
    std::cin >> Choice;

    if (Choice == 1)
    {
        std::cout << "맞췄을 때 이벤트" << std::endl;
    }
    else
    {
        std::cout << "틀렸을 때 이벤트" << std::endl;
    }
}

void Goblin::Skill02()
{
    int Choice;
    std::cout << Name << "이(가) 스킬을 사용했다!" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
    std::cout << "『                       " << std::endl;
    std::cout << "     \"으...어어...\"    " << std::endl;
    std::cout << "                       』" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
    std::cout << Name << "이(가) 전생의 기억을 떠올립니다.." << std::endl;

    for (int i = 0; i < 5; ++i)
    {
        std::cout << '.' << " ";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(600));
    }

    std::cout << "\n아래 중 포인터에서 역참조를 의미하는 연산자로 가장 알맞은 것은?" << std::endl;
    std::cout << "1. &" << std::endl;
    std::cout << "2. ." << std::endl;
    std::cout << "3. ::" << std::endl;
    std::cout << "4. *" << std::endl;
    std::cout << "선택: ";
    std::cin >> Choice;

    if (Choice == 4)
    {
        std::cout << "맞췄을 때 이벤트" << std::endl;
    }
    else
    {
        std::cout << "틀렸을 때 이벤트" << std::endl;
    }
}

void Goblin::Skill03()
{
    int Choice;
    std::cout << Name << "이(가) 스킬을 사용했다!" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
    std::cout << "『                       " << std::endl;
    std::cout << "     \"으...어어...\"    " << std::endl;
    std::cout << "                       』" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
    std::cout << Name << "이(가) 전생의 기억을 떠올립니다.." << std::endl;

    for (int i = 0; i < 5; ++i)
    {
        std::cout << '.' << " ";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(600));
    }

    std::cout << "\n포인터 타입이 필요한 이유로 가장 알맞은 것은?" << std::endl;
    std::cout << "1. 포인터는 반드시 문자열만 가리키기 때문" << std::endl;
    std::cout << "2. 포인터는 값 복사를 못 하게 막기 위해서" << std::endl;
    std::cout << "3. 주소값만 있으면 변수 크기(몇 바이트 읽을지)를 알 수 없어서 타입 정보가 필요하기 때문" << std::endl;
    std::cout << "4. 포인터는 배열에만 쓰이기 때문" << std::endl;
    std::cout << "선택: ";
    std::cin >> Choice;

    if (Choice == 3)
    {
        std::cout << "맞췄을 때 이벤트" << std::endl;
    }
    else
    {
        std::cout << "틀렸을 때 이벤트" << std::endl;
    }
}
