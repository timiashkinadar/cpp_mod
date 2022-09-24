#include "Zombie.h"

Zombie::Zombie() {
    this->name = "missing name";
}

Zombie::Zombie(std::string name) {
    this->name = name;
}

Zombie::~Zombie() {
    std::cout << this->name << " died" << std::endl;
}

void Zombie::announcement(void ) {
    std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}