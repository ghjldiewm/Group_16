#include "Potion.h"
#include <iostream>

int main() {
    HpPotion myHpPotion(50);
    MpPotion myMpPotion(30);
    AttackPotion myAtkPotion(10);
    

    myHpPotion.UseHP();
    myMpPotion.UseMP();
    myAtkPotion.UseBuff();

    std::cout << "\n아이템 확인: " << myHpPotion.getItemname() << " (가격: " << myHpPotion.getValue() << "두쫀쿠)" << std::endl;
    std::cout << "\n아이템 확인: " << myMpPotion.getItemname() << " (가격: " << myMpPotion.getValue() << "두쫀쿠)" << std::endl;
    std::cout << "\n아이템 확인: " << myAtkPotion.getItemname() << " (가격: " << myAtkPotion.getValue() << "두쫀쿠)" << std::endl;

    return 0;
}
