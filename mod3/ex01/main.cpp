#include "ScavTrap.h"

int main(void)
{
    ClapTrap bob("Bob");
    ScavTrap mark("Mark");

    std::cout << std::endl;
    bob.attack(mark.getName());
//    mark.takeDamage(5);
//    mark.beRepaired(5);
//    mark.attack(bob.getName());
//    bob.takeDamage(15);
//    bob.beRepaired(10);
//    mark.guardGate();
//    std::cout << std::endl;
    return 0;
}
