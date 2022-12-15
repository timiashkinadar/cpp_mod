#include "ScavTrap.h"
#include "FragTrap.h"
#include "ClapTrap.h"
#include "DiamondTrap.h"

int main(void)
{
    DiamondTrap	Diam("Diam");
    DiamondTrap	Dim("Dim");

    Diam.whoAmI();
    Dim.whoAmI();
    for (int i = 0; i < 10; ++i)
        Diam.attack(Dim.getName());
    Dim.takeDamage(30);
    Dim.guardGate();
    Dim.highFivesGuys();
    return (0);
}
