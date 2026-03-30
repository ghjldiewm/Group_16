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
    for (int i = 0; i < 3; ++i)
    {
        std::cout << '.' << " ";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(400));
    }
    std::cout << "\n누군가에게 저주받은 스타터 슬라임과 조우하였다!" << std::endl;
}

void Slime::Skill01() // ===쉬움===
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

    std::cout << "\nC / C++에서 함수를 호출(Call)한다는 의미로 가장 알맞은 것은?" << std::endl;
    std::cout << "1. 함수의 내용을 작성한다" << std::endl;
    std::cout << "2. 함수 이름과 인자값을 적어서 실행되게 한다" << std::endl;
    std::cout << "3. 함수의 반환형을 바꾼다" << std::endl;
    std::cout << "4. 함수 이름을 주석 처리한다" << std::endl;
    std::cout << "선택: ";    
    std::cin >> Choice;

    if (Choice == 2)
    {

    }
    else
    {

    }
}

void Slime::Skill02() // ===중간===
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

    std::cout << "\n다음 중 함수 오버로딩(Overloading)이 유효해지는 경우로 알맞은 것은?" << std::endl;
    std::cout << "1. 함수 이름은 같고 매개변수 타입이 다르다" << std::endl;
    std::cout << "2. 함수 이름은 다르고 반환형만 같다" << std::endl;
    std::cout << "3. 함수 이름은 같고 반환형만 다르다" << std::endl;
    std::cout << "4. 함수 이름, 매개변수, 반환형이 전부 같다" << std::endl;
    std::cout << "선택: ";
    std::cin >> Choice;

    if (Choice == 1)
    {

    }
    else
    {

    }
}

void Slime::Skill03() // ===어려움===
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

    std::cout << "\n다음 중 C++에서 반환 타입만 다른 함수 오버로딩이 불가능한 이유로 가장 알맞은 것은?" << std::endl;
    std::cout << "1. 반환형은 무조건 void여야 한다" << std::endl;
    std::cout << "2. C++은 함수 이름만으로만 함수를 구분한다" << std::endl;
    std::cout << "3. 호출할 때 반환형 정보만으로 어떤 함수를 부를지 결정할 수 없어서 애매해진다" << std::endl;
    std::cout << "4. 반환형이 다르면 무조건 템플릿을 써야 한다" << std::endl;
    std::cout << "선택: ";
    std::cin >> Choice;

    if (Choice == 3)
    {

    }
    else
    {

    }
}
