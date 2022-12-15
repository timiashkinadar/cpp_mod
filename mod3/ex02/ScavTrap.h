
#ifndef CPP_MOD_SCAVTRAP_H
#define CPP_MOD_SCAVTRAP_H
#include "ClapTrap.h"

class ScavTrap: public ClapTrap{
public:
    ScavTrap();
    ScavTrap(std::string name);
    ~ScavTrap();
    ScavTrap(const ScavTrap &c);
    ScavTrap &operator=(const ScavTrap &c);

    void attack(const std::string& target);
    void guardGate();
};
#endif //CPP_MOD_SCAVTRAP_H
