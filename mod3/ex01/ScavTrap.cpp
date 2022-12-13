#include "ScavTrap.h"

ScavTrap::ScavTrap(){
    std::cout << ScavTrap::_name << ": Default constructor called" << std::endl;
}

//ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
//    std::cout << ScavTrap::name << ": Name Constructor called" << std::endl;
//}
//
//ScavTrap::~ScavTrap() {
//    std::cout << ScavTrap::name << ": Destructor called" << std::endl;
//}
//
//ScavTrap::ScavTrap(const ScavTrap &c) {
//    std::cout << ScavTrap::name << "Copy constructor called" << std::endl;
//    *this = c;
//}
//
//ScavTrap &ScavTrap::operator=(const ScavTrap &c) {
//    std::cout << ScavTrap::name << ": Copy assignment operator called" << std::endl;
//    this->name = c.name;
//    this->hitPoint = c.hitPoint;
//    this->energyPoint = c.energyPoint;
//    this->attackDamage = c.attackDamage;
//    return (*this);
//}
//
//void	ScavTrap::attack(const std::string &target)
//{
//    if (this->energyPoint < 1 || this->hitPoint < 1)
//        std::cout << "Not enough energy or hit points are zero" << std::endl;
//    else
//    {
//        ScavTrap::energyPoint--;
//        std::cout << ScavTrap::name << " attacks " << target << ", causing " << ScavTrap::attackDamage << " points of damage!" << std::endl;
//    }
//}
//
//void	ScavTrap::guardGate(void)
//{
//    std::cout << ScavTrap::name << " is now in gate keeper mode." << std::endl;
//}