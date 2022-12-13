
#include "ClapTrap.h"

ClapTrap::ClapTrap():name("Default name"), hitPoint(10), energyPoint(10), attackDamage(0) {
    std::cout << ClapTrap::name << ": Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name), hitPoint(10), energyPoint(10), attackDamage(0)
{
    std::cout << "Name Constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &c) {
    std::cout << "Copy constructor called" << std::endl;
    *this = c;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &c) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->name = c.name;
    this->hitPoint = c.hitPoint;
    this->energyPoint = c.energyPoint;
    this->attackDamage = c.attackDamage;
    return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
    if (this->energyPoint < 1 || this->hitPoint < 1)
        std::cout << "Not enough energy or hit points are zero" << std::endl;
    else
    {
        ClapTrap::energyPoint--;
        std::cout << ClapTrap::name << " attacks " << target << ", causing " << ClapTrap::attackDamage << " points of damage!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (ClapTrap::hitPoint > 0){
        std::cout << ClapTrap::name << " suffered " << amount << " points of damage!" << std::endl;
        ClapTrap::hitPoint -= amount;
    } else {
        std::cout << "Stop hitting him! He's already dead!!" << std::endl;
        ClapTrap::hitPoint -= amount;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (ClapTrap::energyPoint > 0)
    {
        std::cout << ClapTrap::name << " recovered " << amount << " points of HP!" << std::endl;
        ClapTrap::hitPoint += amount;
        ClapTrap::energyPoint--;
    }else if (this->energyPoint < 1 || this->hitPoint < 1){
        std::cout << "Not enough energy or hitpoints are zero" << std::endl;
    }
}


std::string ClapTrap::getName(void) const{
    return name;
}