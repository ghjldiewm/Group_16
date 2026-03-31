#include "Wolf.h"

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

Wolf::Wolf()
    :Monster("늑대", Stats{ 200,200,1,1,80,20,1,1,35 }) {
}

void Wolf::EncounterMessage()
{
    for (int i = 0; i < 3; ++i)
    {
        std::cout << '.' << " ";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(400));
    }
    std::cout << "\n늑대와 조우하였다!(수정필)" << std::endl; // 수정 필요
}

void Wolf::Skill01() // ===쉬움===
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

    std::cout << "\n상속에서 파생 클래스에 대한 설명으로 가장 알맞은 것은?" << std::endl;
    std::cout << "1. 다른 클래스를 상속받는 클래스" << std::endl;
    std::cout << "2. 다른 클래스를 상속해주는 클래스" << std::endl;
    std::cout << "3. 반드시 struct여야 하는 클래스" << std::endl;
    std::cout << "4. 함수만 가질 수 있는 클래스" << std::endl;
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

void Wolf::Skill02() // ===중간===
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

    std::cout << "\n다형성을 위해 기본 클래스 함수에 붙이는 키워드로 가장 알맞은 것은?" << std::endl;
    std::cout << "1. template" << std::endl;
    std::cout << "2. typedef" << std::endl;
    std::cout << "3. virtual" << std::endl;
    std::cout << "4. constexpr" << std::endl;
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

void Wolf::Skill03() // ===어려움===
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

    std::cout << "\n순수 가상 함수에 대한 설명으로 가장 알맞은 것은?" << std::endl;
    std::cout << "1. 기본 클래스에서 구현이 반드시 있어야 한다" << std::endl;
    std::cout << "2. virtual 함수() = 0; 형태로 선언하며, 파생 클래스에서 구현을 강제한다" << std::endl;
    std::cout << "3. static 함수의 다른 이름이다" << std::endl;
    std::cout << "4. 객체를 여러 개 만드는 문법이다" << std::endl;
    std::cout << "선택: ";
    std::cin >> Choice;

    if (Choice == 2)
    {
        std::cout << "맞췄을 때 이벤트" << std::endl;
    }
    else
    {
        std::cout << "틀렸을 때 이벤트" << std::endl;
    }
}
