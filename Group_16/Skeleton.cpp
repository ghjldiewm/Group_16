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
    :Monster("스켈레톤", Stats{ 90,90,1,1,40,10,1,1,35 }) { }

void Skeleton::EncounterMessage()
{
    for (int i = 0; i < 3; ++i)
    {
        std::cout << '.' << " ";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(400));
    }
    std::cout << "스켈레톤이 되어버린 [Unreal_4기] 수료생과 조우하였다!" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    std::cout << "『                       " << std::endl;
    std::cout << "    ..달그락..삐그덕..    " << std::endl;
    std::cout << "                       』" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
}

void Skeleton::Skill01()
{
    int Choice;
    std::cout << Name << "이(가) 스킬을 사용했다!" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
    std::cout << "『                       " << std::endl;
    std::cout << "    ..달그락..삐그덕..    " << std::endl;
    std::cout << "                       』" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
    std::cout << Name << "이(가) 달그락대며 전생의 기억을 떠올립니다.." << std::endl;

    for (int i = 0; i < 5; ++i)
    {
        std::cout << '.' << " ";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(600));
    }

    std::cout << "\nif (조건식) { ... }의 의미로 가장 알맞은 것은?" << std::endl;
    std::cout << "1. 조건식이 거짓일 때만 실행" << std::endl;
    std::cout << "2. 항상 실행" << std::endl;
    std::cout << "3. 조건식이 참일 때만 실행" << std::endl;
    std::cout << "4. 컴파일 시에만 실행" << std::endl;
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

void Skeleton::Skill02()
{
    int Choice;
    std::cout << Name << "이(가) 스킬을 사용했다!" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
    std::cout << "『                       " << std::endl;
    std::cout << "    ..달그락..삐그덕..    " << std::endl;
    std::cout << "                       』" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
    std::cout << Name << "이(가) 달그락대며 전생의 기억을 떠올립니다.." << std::endl;

    for (int i = 0; i < 5; ++i)
    {
        std::cout << '.' << " ";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(600));
    }

    std::cout << "\nif - else if - else 구조에 대한 설명으로 가장 알맞은 것은?" << std::endl;
    std::cout << "1. 모든 조건이 동시에 실행된다" << std::endl;
    std::cout << "2. 여러 조건을 순서대로 검사하고, 처음으로 참이 된 블록만 실행된다" << std::endl;
    std::cout << "3. else는 조건을 적어야 한다" << std::endl;
    std::cout << "4. else if는 1번만 쓸 수 있다" << std::endl;
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

void Skeleton::Skill03()
{
    int Choice;
    std::cout << Name << "이(가) 스킬을 사용했다!" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
    std::cout << "『                       " << std::endl;
    std::cout << "    ..달그락..삐그덕..    " << std::endl;
    std::cout << "                       』" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
    std::cout << Name << "이(가) 달그락대며 전생의 기억을 떠올립니다.." << std::endl;

    for (int i = 0; i < 5; ++i)
    {
        std::cout << '.' << " ";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(600));
    }

    std::cout << "\n반복 횟수가 명확한 상황에서 주로 쓰는 반복문으로 가장 알맞은 것은?" << std::endl;
    std::cout << "1. for" << std::endl;
    std::cout << "2. switch" << std::endl;
    std::cout << "3. goto" << std::endl;
    std::cout << "4. break" << std::endl;
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
