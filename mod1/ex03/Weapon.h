
#ifndef CPP_MODULE_WEAPON_H
#define CPP_MODULE_WEAPON_H
#include <iostream>
#include <string>

class Weapon{
    private:
        std::string type;
    public:
        Weapon(std::string club);
        ~Weapon();
        void setType(std::string type);
        const std::string &getType();

};
#endif //CPP_MODULE_WEAPON_H
