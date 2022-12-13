#include "ClapTrap.h"

int main(void)
{
    ClapTrap bob("Bob");
    ClapTrap mark("Mark");

    std::cout << std::endl;
    bob.attack(mark.getName());
    mark.takeDamage(5);
    mark.beRepaired(5);
    mark.attack(bob.getName());
    bob.takeDamage(15);
    bob.beRepaired(10);
    std::cout << std::endl;
    return 0;
}
