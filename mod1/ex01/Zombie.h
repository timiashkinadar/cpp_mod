#ifndef CPP_MODULE_ZOMBIE_H
#define CPP_MODULE_ZOMBIE_H
#include <iostream>
#include <string>
class Zombie{
    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie();
        void announcement(void);
        void setName(std::string name);
    private:
        std::string name;
};

Zombie* zombieHorde(int N, std::string name);
#endif //CPP_MODULE_ZOMBIE_H
