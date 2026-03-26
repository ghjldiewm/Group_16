
#include <iostream>
#include <string>
#include "Unit.h"

int main() {
    std::string userName;

    std::cout << "캐릭터 이름을 입력하세요:" << std::endl;
    std::getline(std::cin, userName);
    std::cout << "캐릭터 " << userName << " 생성 완료!" << std::endl;

    Unit player(userName);


    return 0;
}

