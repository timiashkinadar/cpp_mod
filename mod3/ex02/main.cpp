#include "ScavTrap.h"
#include "FragTrap.h"

int main(void)
{
    FragTrap	f1("Frag1");
    FragTrap	f2("Frag2");
    f1.attack(f2.getName());
    f2.takeDamage(30);
    f1.attack(f2.getName());
    f2.takeDamage(30);
    f1.attack(f2.getName());
    f2.takeDamage(30);
    f1.attack(f2.getName());
    f2.takeDamage(30);
    f1.attack(f2.getName());
    f2.takeDamage(30);
    f1.attack(f2.getName());
    f2.takeDamage(30);
    f2.beRepaired(50);
    f2.beRepaired(60);
    f2.highFivesGuys();
    f1.highFivesGuys();
}
