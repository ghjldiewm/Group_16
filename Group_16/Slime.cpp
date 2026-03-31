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
    :Monster("슬라임", Stats{ 150,150,1,1,55,1,1,1,35 }) { }

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

    std::cout << "\n배열의 원소에 접근할 때 사용하는 연산자로 가장 알맞은 것은?" << std::endl;
    std::cout << "1. ()" << std::endl;
    std::cout << "2. <>" << std::endl;
    std::cout << "3. {}" << std::endl;
    std::cout << "4. []" << std::endl;
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

    std::cout << "\n아래 중 배열에 대한 설명으로 가장 알맞은 것은?" << std::endl;
    std::cout << "1. 배열은 입력을 받을 수 없다" << std::endl;
    std::cout << "2. 배열은 원소 접근이 불가능하다" << std::endl;
    std::cout << "3. 배열은 반드시 크기가 1이어야 한다" << std::endl;
    std::cout << "4. arr2 = arr1; 같은 배열 전체 대입은 컴파일 오류가 날 수 있다" << std::endl;
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

    std::cout << "\n아래 중 배열 임의 접근(Random access)의 의미로 가장 알맞은 것은?" << std::endl;
    std::cout << "1. 배열은 항상 랜덤 값으로 채워진다" << std::endl;
    std::cout << "2. arr[2]처럼 인덱스로 한 번에 특정 위치 원소에 접근할 수 있다" << std::endl;
    std::cout << "3. 배열은 반복문으로만 접근할 수 있다" << std::endl;
    std::cout << "4. 배열은 주소를 저장하는 자료구조다" << std::endl;
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
