
#ifndef CPP_MODULE_HUMANA_H
#define CPP_MODULE_HUMANA_H
#include <iostream>
#include <string>
#include "Weapon.h"

class HumanA{
    private:
        std::string _name;
        Weapon &_weapon;
    public:
        void attack();
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
};
#endif //CPP_MODULE_HUMANA_H
