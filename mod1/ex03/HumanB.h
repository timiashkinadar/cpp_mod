
#ifndef CPP_MODULE_HUMANB_H
#define CPP_MODULE_HUMANB_H
#include <iostream>
#include <string>
#include "Weapon.h"
class HumanB{
private:
    std::string name;
    Weapon *weapon;
public:
    HumanB(std::string name);
    void attack();
    void setWeapon(Weapon &weapon);
    ~HumanB();
};
#endif //CPP_MODULE_HUMANB_H
