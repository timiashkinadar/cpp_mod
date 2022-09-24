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
    private:
        std::string name;
};
Zombie* newZombie(std::string name);
void randomChump(std::string name);
#endif //CPP_MODULE_ZOMBIE_H
