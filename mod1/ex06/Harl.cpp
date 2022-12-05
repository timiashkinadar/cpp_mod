#include "Harl.h"

void Harl::complain(std::string level) {
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*f[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    for(int i = 0; i < 4; i++){
        if(level == levels[i]){
                for(int y = i; y < 4; y++){
                    (this->*f[y])();
            }
        }
    }
}

void Harl::debug() {
    std::cout << "[ DEBUG ]\n";
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
    std::cout << std::endl;
}

void Harl::info() {
    std::cout << "[ INFO ]\n";
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
    std::cout << std::endl;
}

void Harl::warning() {
    std::cout << "[ WARNING ]\n";
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
    std::cout << std::endl;
}

void Harl::error() {
    std::cout << "[ ERROR ]\n";
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
    std::cout << std::endl;
}