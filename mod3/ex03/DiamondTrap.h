
#ifndef CPP_MOD_DIAMONDTRAP_H
#define CPP_MOD_DIAMONDTRAP_H
#include "FragTrap.h"
#include "ScavTrap.h"
#include "ClapTrap.h"

class DiamondTrap : public FragTrap, public ScavTrap{
private:
    std::string _name;
public:
    DiamondTrap();
    DiamondTrap(std::string name);
    ~DiamondTrap();
    DiamondTrap(const DiamondTrap &c);
    DiamondTrap &operator=(const DiamondTrap &c);

    void attack(const std::string& target);
    void whoAmI();

};

#endif //CPP_MOD_DIAMONDTRAP_H
