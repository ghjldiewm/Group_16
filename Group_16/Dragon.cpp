#include "Dragon.h"

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

Dragon::Dragon()
    :Monster("드래곤", Stats{ 500,500,1,1,90,25,1,1,35 }) { }

void Dragon::EncounterMessage()
{
    for (int i = 0; i < 3; ++i)
    {
        std::cout << '.' << " ";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(400));
    }
    std::cout << "\n함수를 잘못 호출한 드래곤과 조우했다! 뭔가 이상하다." << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    std::cout << "『                       " << std::endl;
    std::cout << "      \"냥냥~~~~~\"     " << std::endl;
    std::cout << "                       』" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
}

void Dragon::Skill01() // ===쉬움===
{
    int Choice;
    std::cout << Name << "이(가) 스킬을 사용했다!" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
    std::cout << "『                       " << std::endl;
    std::cout << "      \"냥냥~~~~~\"     " << std::endl;
    std::cout << "                       』" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
    std::cout << Name << "이(가) 전생의 기억을 떠올립니다.." << std::endl;

    for (int i = 0; i < 5; ++i)
    {
        std::cout << '.' << " ";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(600));
    }

    std::cout << "\n응집도에 대한 설명으로 가장 알맞은 것은?" << std::endl;
    std::cout << "1. 클래스(모듈) 내부 구성 요소들이 얼마나 서로 관련이 깊은지" << std::endl;
    std::cout << "2. 클래스들 사이의 의존성이 얼마나 강한지" << std::endl;
    std::cout << "3. CPU 캐시 적중률이 얼마나 높은지" << std::endl;
    std::cout << "4. 메모리 해제가 자동으로 되는지" << std::endl;
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

void Dragon::Skill02() // ===중간===
{
    int Choice;
    std::cout << Name << "이(가) 스킬을 사용했다!" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
    std::cout << "『                       " << std::endl;
    std::cout << "      \"냥냥~~~~~\"     " << std::endl;
    std::cout << "                       』" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
    std::cout << Name << "이(가) 전생의 기억을 떠올립니다.." << std::endl;

    for (int i = 0; i < 5; ++i)
    {
        std::cout << '.' << " ";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(600));
    }

    std::cout << "\n결합도에 대한 설명으로 가장 알맞은 것은?" << std::endl;
    std::cout << "1. 클래스 내부 기능의 관련성" << std::endl;
    std::cout << "2. 템플릿 타입이 얼마나 다양한지" << std::endl;
    std::cout << "3. 클래스(모듈) 간 의존성이 얼마나 강한지" << std::endl;
    std::cout << "4. 반복자가 앞에서 뒤로 가는지" << std::endl;
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

void Dragon::Skill03() // ===어려움===
{
    int Choice;
    std::cout << Name << "이(가) 스킬을 사용했다!" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
    std::cout << "『                       " << std::endl;
    std::cout << "      \"냥냥~~~~~\"     " << std::endl;
    std::cout << "                       』" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
    std::cout << Name << "이(가) 전생의 기억을 떠올립니다.." << std::endl;

    for (int i = 0; i < 5; ++i)
    {
        std::cout << '.' << " ";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(600));
    }

    std::cout << "\n결합도를 낮춘 설계에 가장 가까운 설명은? (자동차-엔진 예시 기준)" << std::endl;
    std::cout << "1. Car가 DieselEngine 객체를 멤버로 직접 들고 있다" << std::endl;
    std::cout << "2. Car가 엔진 코드를 복사해서 클래스 안에 붙여넣는다" << std::endl;
    std::cout << "3. Car가 엔진 종류마다 if문으로 분기해서 직접 호출한다" << std::endl;
    std::cout << "4. Car가 Engine이라는 추상(인터페이스)에만 의존하고, 구체 엔진은 교체 가능하다" << std::endl;
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
