#include "Zombie.h"

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

Zombie::Zombie()
    :Monster("좀비", Stats{ 270,270,1,1,85,25,1,1,35 }) { }

void Zombie::EncounterMessage()
{
    for (int i = 0; i < 3; ++i)
    {
        std::cout << '.' << " ";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(400));
    }
    std::cout << "\n핫식스에 중독된 사ㄹㅏ.... 좀비와 조우했다!" << std::endl; // 수정 필요
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    std::cout << "『                       " << std::endl;
    std::cout << "     \"그워어......\"    " << std::endl;
    std::cout << "                       』" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
}

void Zombie::Skill01() // ===쉬움===
{
    int Choice;
    std::cout << Name << "이(가) 스킬을 사용했다!" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
    std::cout << "『                       " << std::endl;
    std::cout << "     \"그워어......\"    " << std::endl;
    std::cout << "                       』" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
    std::cout << Name << "이(가) 핫식스를 홀짝대며 전생의 기억을 떠올립니다.." << std::endl;

    for (int i = 0; i < 5; ++i)
    {
        std::cout << '.' << " ";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(600));
    }

    std::cout << "\ntemplate <typename T>의 의미로 가장 알맞은 것은?" << std::endl;
    std::cout << "1. 런타임에 타입을 자동으로 바꾼다" << std::endl;
    std::cout << "2. 어떤 타입이 올지 모르지만, 그 타입을 T라고 부르겠다" << std::endl;
    std::cout << "3. T는 항상 int를 의미한다" << std::endl;
    std::cout << "4. 템플릿은 함수 오버로딩을 금지한다" << std::endl;
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

void Zombie::Skill02() // ===중간===
{
    int Choice;
    std::cout << Name << "이(가) 스킬을 사용했다!" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
    std::cout << "『                       " << std::endl;
    std::cout << "     \"그워어......\"    " << std::endl;
    std::cout << "                       』" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
    std::cout << Name << "이(가) 핫식스를 홀짝대며 전생의 기억을 떠올립니다.." << std::endl;

    for (int i = 0; i < 5; ++i)
    {
        std::cout << '.' << " ";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(600));
    }

    std::cout << "\n함수 오버로딩이 유효해지는 경우로 가장 알맞은 것은?" << std::endl;
    std::cout << "1. 함수 이름은 같고 매개변수 타입이 다르다" << std::endl;
    std::cout << "2. 함수 이름은 같고 반환형만 다르다" << std::endl;
    std::cout << "3. 함수 이름은 다르고 매개변수와 반환형이 같다" << std::endl;
    std::cout << "4. 함수 이름/매개변수/반환형이 모두 같다" << std::endl;
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

void Zombie::Skill03() // ===어려움===
{
    int Choice;
    std::cout << Name << "이(가) 스킬을 사용했다!" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
    std::cout << "『                       " << std::endl;
    std::cout << "     \"그워어......\"    " << std::endl;
    std::cout << "                       』" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
    std::cout << Name << "이(가) 핫식스를 홀짝대며 전생의 기억을 떠올립니다.." << std::endl;

    for (int i = 0; i < 5; ++i)
    {
        std::cout << '.' << " ";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(600));
    }

    std::cout << "\n반환 타입만 다른 경우 함수 오버로딩이 성립하지 않는다는 설명으로 가장 알맞은 것은?" << std::endl;
    std::cout << "1. C++은 함수 이름만으로만 함수를 구분하기 때문이다" << std::endl;
    std::cout << "2. 호출 시점에 반환형 정보만으로 어떤 함수를 호출할지 구분할 수 없기 때문이다" << std::endl;
    std::cout << "3. 반환형이 다르면 무조건 템플릿으로 바꿔야 하기 때문이다" << std::endl;
    std::cout << "4. 반환형이 다르면 링크 단계에서 자동으로 합쳐지기 때문이다" << std::endl;
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
