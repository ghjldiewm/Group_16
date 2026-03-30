#include "Dice.h"
DiceSystem::DiceSystem()
    :gen(rd()), dis(1, 6) {}
//랜덤시드에서 가져온 수를 1~6 범위내로 균일 확률로 배치
int DiceSystem::RollDice()
{
    std::cout << "[주사위를 던지는 중...]" << std::endl;

    for (int i = 0; i < 5; ++i)
    {
        std::cout << '.' << " ";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
    }

    int result = dis(gen);
    std::cout << "결과: " << result << std::endl;

    return result;
}
int DiceSystem::ThrowDice()
{
    char Input;
    while (1)
    {
        std::cout << "주사위를 굴리려면 r을 입력하세요!['q'를 눌러 종료]" << std::endl;
        std::cin >> Input;

        if (Input == 'r')
        {

            return RollDice();
        }
        else if (Input == 'q')
        {
            break;
        }
        else
        {
            std::cout << "잘못된 입력입니다." << std::endl;
        }
    }
}

