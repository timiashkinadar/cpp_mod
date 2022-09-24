#include "Zombie.h"

Zombie* zombieHorde(int N, std::string name){
    if (N < 1){
        std::cout << "N less than zero!" << std::endl;
        return NULL;
    }
    Zombie* zombie = new Zombie[N];
    for(int i = 0; i < N; i++){
        zombie[i].setName(name);
    }
    return zombie;
}

