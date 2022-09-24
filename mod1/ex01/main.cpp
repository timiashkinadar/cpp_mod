#include "Zombie.h"

int main(void){
    int n;
    n = 10;
    Zombie *z = zombieHorde(n, "Zomb");
    for (int i = 0; i < n; i++){
        z[i].announcement();
    }
    delete[] z;
    return (0);
}

