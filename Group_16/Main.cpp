
#include <iostream>
#include <string>
#include "Unit.h"

int main() {
    std::string userName;

    std::cout << "" << std::endl;
    std::getline(std::cin, userName);
    std::cout << "" << userName << "" << std::endl;

    Unit player(userName);
    

    return 0;
}

