#ifndef CPP_MOD_CLAPTRAP_H
#define CPP_MOD_CLAPTRAP_H
#include <iostream>

class ClapTrap {
private:
    std::string name;
    int hitPoint;
    int energyPoint;
    int attackDamage;
public:
    ClapTrap();
    ClapTrap(std::string name);
    ~ClapTrap();
    ClapTrap(const ClapTrap &c);
    ClapTrap &operator=(const ClapTrap &c);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    std::string getName(void) const;
};


#endif //CPP_MOD_CLAPTRAP_H
