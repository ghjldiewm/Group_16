#include "Player.h"

Player::Player(std::string name, Stats stats)
    :Unit(name, stats)
{
    Name = name;
}

void Player::PrintStatus() const{
    std::cout << "------------------------------------" << std::endl;
    std::cout << "* 현재 능력치" << std::endl;
    std::cout << "닉네임: " << Name << std::endl;
    std::cout << "Lv. " << Status.Level << std::endl;
    std::cout << "Exp: " << Status.Exp << std::endl;
    std::cout << "Max HP: " << Status.MaxHP << std::endl;
    std::cout << "HP: " << Status.HP << std::endl;
    std::cout << "Max MP: " << Status.MaxMP << std::endl;
    std::cout << "MP: " << Status.MP << std::endl;
    std::cout << "공격력: " << Status.Attack << std::endl;
    std::cout << "방어력: " << Status.Defense << std::endl;
    std::cout << "속도: " << Status.Speed << std::endl;
    std::cout << "치명타 확률: " << Status.Crit << std::endl;
    std::cout << "------------------------------------" << std::endl;
}

void Player::levelUp()
{
    Status.Level++;
    Status.MaxHP += 10;
    Status.MaxMP += 10;
    Status.HP = Status.MaxHP;
    Status.MP = Status.MaxMP;

    Status.Attack += 5;
    Status.Defense += 5;
    Status.Speed += 5;
    Status.Crit += 1;
}
void Player::GetExperience(int amount)
{

}

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
