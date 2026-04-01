#include "Orc.h"

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

Orc::Orc()
    :Monster("오크", Stats{ 400,400,1,1,90,20,1,1,35 }) { }

void Orc::EncounterMessage()
{
    for (int i = 0; i < 3; ++i)
    {
        std::cout << '.' << " ";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(400));
    }
    std::cout << "닮고싶지 않은 오크와 조우하였다!" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    std::cout << "『                       " << std::endl;
    std::cout << "     \"크워어!!!!!!\"    " << std::endl;
    std::cout << "                       』" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
}

void Orc::Skill01()
{
    int Choice;
    std::cout << Name << "이(가) 스킬을 사용했다!" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
    std::cout << "『                       " << std::endl;
    std::cout << "     \"크워어!!!!!!\"    " << std::endl;
    std::cout << "                       』" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
    std::cout << Name << "이(가) 포효하며 전생의 기억을 떠올립니다.." << std::endl;

    for (int i = 0; i < 5; ++i)
    {
        std::cout << '.' << " ";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(600));
    }

    std::cout << "\nSTL(Standard Template Library)에 대한 설명으로 가장 알맞은 것은?" << std::endl;
    std::cout << "1. C++ 표준 라이브러리의 일부로 컨테이너/알고리즘/반복자 등을 제공한다" << std::endl;
    std::cout << "2. C++과 무관한 운영체제 기능이다" << std::endl;
    std::cout << "3. STL을 쓰면 #include가 필요 없다" << std::endl;
    std::cout << "4. STL은 오직 배열만 지원한다" << std::endl;
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

void Orc::Skill02()
{
    int Choice;
    std::cout << Name << "이(가) 스킬을 사용했다!" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
    std::cout << "『                       " << std::endl;
    std::cout << "     \"크워어!!!!!!\"    " << std::endl;
    std::cout << "                       』" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
    std::cout << Name << "이(가) 포효하며 전생의 기억을 떠올립니다.." << std::endl;

    for (int i = 0; i < 5; ++i)
    {
        std::cout << '.' << " ";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(600));
    }

    std::cout << "\nvector에 대한 특징으로 가장 알맞은 것은?" << std::endl;
    std::cout << "1. 원소 삽입/삭제는 중간이 가장 효율적이다" << std::endl;
    std::cout << "2. 내부적으로 배열처럼 동작하며, 인덱스로 임의 접근이 가능하다" << std::endl;
    std::cout << "3. 키-값 쌍으로만 데이터를 저장한다" << std::endl;
    std::cout << "4. 원소 개수가 늘어도 크기가 절대 변하지 않는다" << std::endl;
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

void Orc::Skill03()
{
    int Choice;
    std::cout << Name << "이(가) 스킬을 사용했다!" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
    std::cout << "『                       " << std::endl;
    std::cout << "     \"크워어!!!!!!\"    " << std::endl;
    std::cout << "                       』" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
    std::cout << Name << "이(가) 포효하며 전생의 기억을 떠올립니다.." << std::endl;

    for (int i = 0; i < 5; ++i)
    {
        std::cout << '.' << " ";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(600));
    }

    std::cout << "\nmap의 주요 특성으로 가장 알맞은 것은?" << std::endl;
    std::cout << "1. 키의 중복을 허용한다" << std::endl;
    std::cout << "2. 원소는 삽입한 순서대로만 출력된다" << std::endl;
    std::cout << "3. 키를 기준으로 자동 정렬되며, 중복된 키는 허용하지 않는다" << std::endl;
    std::cout << "4. 키는 비교 연산이 불가능해야 한다" << std::endl;
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
