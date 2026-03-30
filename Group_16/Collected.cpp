#include "Collected.h"
#include <iostream>

int main() {
    Twig myTwig(5);
    Stone myStone(10);
    Herb myHerb("Red");

    std::cout << "--- 소지품 창 (재료) ---" << std::endl;
    std::cout << "이름: " << myTwig.getItemname() << " | 수량: " << myTwig.GetCount() << std::endl;
    std::cout << "이름: " << myStone.getItemname() << " | 가격: " << myStone.getValue() << "두쫀쿠" << std::endl;
    std::cout << "이름: " << myHerb.getItemname() << " | 가치: " << myHerb.getValue() << "두쫀쿠" << std::endl;

    return 0;
}
