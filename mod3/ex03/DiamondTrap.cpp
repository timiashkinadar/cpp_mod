#include "DiamondTrap.h"

DiamondTrap::DiamondTrap(){
    this->_name = "Default name";
    ClapTrap::_name = this->_name + "_clap_name";
    this->_hitPoint = FragTrap::_hitPoint;
    this->_energyPoint = ScavTrap::_energyPoint;
    this->_attackDamage = FragTrap::_attackDamage;
    std::cout << DiamondTrap::_name << ": Default Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name){
    this->_name = name;
    ClapTrap::_name = this->_name + "_clap_name";
    this->_hitPoint = FragTrap::_hitPoint;
    this->_energyPoint = ScavTrap::_energyPoint;
    this->_attackDamage = FragTrap::_attackDamage;
    std::cout << DiamondTrap::_name << ": Name Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &c) : ClapTrap(c), FragTrap(c), ScavTrap(c){
    std::cout << DiamondTrap::_name << "Copy constructor called" << std::endl;
    *this = c;
}

DiamondTrap::~DiamondTrap() {
    std::cout << DiamondTrap::_name << ": Destructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &c) {
    this->_name = c._name;
    this->_hitPoint = c._hitPoint;
    this->_energyPoint = c._energyPoint;
    this->_attackDamage = c._attackDamage;
    std::cout << DiamondTrap::_name << ": Copy assignment operator called" << std::endl;
    return (*this);
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap :" << this->_name << " and ClapTrap " << ClapTrap::_name << std::endl;
}

void DiamondTrap::attack(const std::string &target) {
    ScavTrap::attack(target);
}