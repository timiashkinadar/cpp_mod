#include "ScavTrap.h"

ScavTrap::ScavTrap(){
    std::cout << ScavTrap::_name << ": Default constructor called" << std::endl;
    _name = "Default name";
    _hitPoint = 100;
    _energyPoint = 50;
    _attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    std::cout << ScavTrap::_name << ": Name Constructor called" << std::endl;
    _hitPoint = 100;
    _energyPoint = 50;
    _attackDamage = 20;
}

ScavTrap::~ScavTrap() {
    std::cout << ScavTrap::_name << ": Destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &c) : ClapTrap(c){
    std::cout << ScavTrap::_name << "Copy constructor called" << std::endl;
    *this = c;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &c) {
    std::cout << ScavTrap::_name << ": Copy assignment operator called" << std::endl;
    this->_name = c._name;
    this->_hitPoint = c._hitPoint;
    this->_energyPoint = c._energyPoint;
    this->_attackDamage = c._attackDamage;
    return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
    if (this->_energyPoint < 1 || this->_hitPoint < 1)
        std::cout << "Not enough energy or hit points are zero" << std::endl;
    else
    {
        ScavTrap::_energyPoint--;
        std::cout << ScavTrap::_name << " attacks " << target << ", causing " << ScavTrap::_attackDamage << " points of damage!" << std::endl;
    }
}

void	ScavTrap::guardGate(void)
{
    std::cout << ScavTrap::_name << " is now in gate keeper mode." << std::endl;
}