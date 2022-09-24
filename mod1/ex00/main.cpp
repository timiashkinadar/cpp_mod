#include "Zombie.h"

int main(void){
    Zombie z1 = Zombie();
    z1.announcement();

    Zombie z2 = Zombie("Zomb");
    z2.announcement();

    Zombie* z3 = newZombie("Zomby");
    z3->announcement();

    randomChump("Zoo");
    delete z3;
}

