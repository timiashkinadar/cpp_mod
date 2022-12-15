
#ifndef CPP_MOD_FLAGTRAP_H
#define CPP_MOD_FLAGTRAP_H
#include "ClapTrap.h"
class FragTrap: virtual public ClapTrap{
public:
    FragTrap();
    FragTrap(std::string name);
    ~FragTrap();
    FragTrap(const FragTrap &c);
    FragTrap &operator=(const FragTrap &c);

    void attack(const std::string& target);
    void highFivesGuys(void);
};

#endif //CPP_MOD_FLAGTRAP_H
