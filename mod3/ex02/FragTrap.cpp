#include "FragTrap.h"

FragTrap::FragTrap(){
    std::cout << FragTrap::_name << ": Default constructor called" << std::endl;
    _name = "Default name";
    _hitPoint = 100;
    _energyPoint = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
    std::cout << FragTrap::_name << ": Name Constructor called" << std::endl;
    _hitPoint = 100;
    _energyPoint = 100;
    _attackDamage = 30;
}

FragTrap::~FragTrap() {
    std::cout << FragTrap::_name << ": Destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &c) : ClapTrap(c){
    std::cout << FragTrap::_name << "Copy constructor called" << std::endl;
    *this = c;
}

FragTrap &FragTrap::operator=(const FragTrap &c) {
    std::cout << FragTrap::_name << ": Copy assignment operator called" << std::endl;
    this->_name = c._name;
    this->_hitPoint = c._hitPoint;
    this->_energyPoint = c._energyPoint;
    this->_attackDamage = c._attackDamage;
    return (*this);
}

void	FragTrap::attack(const std::string &target)
{
    if (this->_energyPoint < 1 || this->_hitPoint < 1)
        std::cout << "Not enough energy or hit points are zero" << std::endl;
    else
    {
        FragTrap::_energyPoint--;
        std::cout << FragTrap::_name << " attacks " << target << ", causing " << FragTrap::_attackDamage << " points of damage!" << std::endl;
    }
}

void FragTrap::highFivesGuys(){
    std::cout << "high fives!" << std::endl;
}
