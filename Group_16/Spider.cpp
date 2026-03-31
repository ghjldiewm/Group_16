#include "Spider.h"

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

Spider::Spider()
    :Monster("거미", Stats{ 230,230,1,1,85,22,1,1,35 }) { }

void Spider::EncounterMessage()
{
    for (int i = 0; i < 3; ++i)
    {
        std::cout << '.' << " ";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(400));
    }
    std::cout << "\n누군가의 애완거미와 조우했다! 마스터 클래스의 누군가를 닮은 것 같다" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
}

void Spider::Skill01() // ===쉬움===
{
    int Choice;
    std::cout << Name << "이(가) 스킬을 사용했다!" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
    std::cout << "『                       " << std::endl;
    std::cout << "     \"...........\"    " << std::endl;
    std::cout << "                       』" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
    std::cout << Name << "이(가) 전생의 기억을 떠올립니다.." << std::endl;

    for (int i = 0; i < 5; ++i)
    {
        std::cout << '.' << " ";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(600));
    }

    std::cout << "\n힙(Heap) 메모리를 동적 할당/해제할 때 사용하는 연산자 조합으로 가장 알맞은 것은?" << std::endl;
    std::cout << "1. malloc / free" << std::endl;
    std::cout << "2. create / destroy" << std::endl;
    std::cout << "3. alloc / release" << std::endl;
    std::cout << "4. new / delete" << std::endl;
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

void Spider::Skill02() // ===중간===
{
    int Choice;
    std::cout << Name << "이(가) 스킬을 사용했다!" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
    std::cout << "『                       " << std::endl;
    std::cout << "     \"...........\"    " << std::endl;
    std::cout << "                       』" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
    std::cout << Name << "이(가) 전생의 기억을 떠올립니다.." << std::endl;

    for (int i = 0; i < 5; ++i)
    {
        std::cout << '.' << " ";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(600));
    }

    std::cout << "\n아래 중 Dangling Pointer(댕글링 포인터)에 대한 설명으로 가장 알맞은 것은?" << std::endl;
    std::cout << "1. 아직 어떤 변수도 가리키지 않는 nullptr 포인터" << std::endl;
    std::cout << "2. 배열의 첫 원소를 가리키는 포인터" << std::endl;
    std::cout << "3. 스택에 있는 지역변수를 가리키는 포인터" << std::endl;
    std::cout << "4. 이미 해제된 메모리 주소를 계속 가리키는 포인터" << std::endl;
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

void Spider::Skill03() // ===어려움===
{
    int Choice;
    std::cout << Name << "이(가) 스킬을 사용했다!" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
    std::cout << "『                       " << std::endl;
    std::cout << "     \"...........\"    " << std::endl;
    std::cout << "                       』" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
    std::cout << Name << "이(가) 전생의 기억을 떠올립니다.." << std::endl;

    for (int i = 0; i < 5; ++i)
    {
        std::cout << '.' << " ";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(600));
    }

    std::cout << "\nunique_ptr에 대한 설명으로 가장 알맞은 것은?" << std::endl;
    std::cout << "1. 여러 포인터가 하나의 객체를 공동 소유하며 참조 카운트를 센다" << std::endl;
    std::cout << "2. 복사가 가능하고, 복사할수록 객체가 안전해진다" << std::endl;
    std::cout << "3. 단일 소유권을 가지며 복사가 불가능하고 move로만 소유권 이전이 가능하다" << std::endl;
    std::cout << "4. 반드시 delete로 직접 해제해야 한다" << std::endl;
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
