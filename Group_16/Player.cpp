#include "Player.h"

Player::Player(std::string name, Stats stats, Inventory* inventory)
    :Unit(name, stats),
    inventory(inventory)
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

void Player::LevelUp()
{
    std::cout << "Level up!" << std::endl;
    Status.Level++;
    Status.MaxHP += 10;
    Status.MaxMP += 10;
    Status.HP = Status.MaxHP;
    Status.MP = Status.MaxMP;

    Status.Attack += 5;
    Status.Defense += 5;
    Status.Speed += 5;
    Status.Crit += 1;
    std::cout << "현재 레벨: " << Status.Level << std::endl;

}

void Player::GetExperience(int amount)
{
    std::cout << amount << "의 경험치를 얻었습니다!" << std::endl;
    Status.Exp += amount;

    while (Status.Exp >= 100)
    {
        LevelUp();
        Status.Exp -= 100;
    }

    std::cout << "현재 경험치: " << Status.Exp << std::endl;
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
