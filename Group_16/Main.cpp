
#include <iostream>
#include <string>
#include "Unit.h"

int main() {
    std::string userName;

    std::cout << "입력" << std::endl;
    std::getline(std::cin, userName);
    std::cout << "출력" << userName << "" << std::endl;

    Unit player(userName);
    

    return 0;
}

