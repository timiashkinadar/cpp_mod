#include "ClapTrap.h"

ClapTrap::ClapTrap():_name("Default name"), _hitPoint(10), _energyPoint(10), _attackDamage(0) {
    std::cout << ClapTrap::_name << ": Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
    std::cout << ClapTrap::_name << ": Name Constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << ClapTrap::_name << ": Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &c) {
    std::cout << ClapTrap::_name << ": Copy constructor called" << std::endl;
    *this = c;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &c) {
    std::cout << ClapTrap::_name << ": Copy assignment operator called" << std::endl;
    this->_name = c._name;
    this->_hitPoint = c._hitPoint;
    this->_energyPoint = c._energyPoint;
    this->_attackDamage = c._attackDamage;
    return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
    if (this->_energyPoint < 1 || this->_hitPoint < 1)
        std::cout << "Not enough energy or hit points are zero" << std::endl;
    else
    {
        ClapTrap::_energyPoint--;
        std::cout << ClapTrap::_name << " attacks " << target << ", causing " << ClapTrap::_attackDamage << " points of damage!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (ClapTrap::_hitPoint > 0){
        std::cout << ClapTrap::_name << " suffered " << amount << " points of damage!" << std::endl;
        ClapTrap::_hitPoint -= amount;
    } else {
        std::cout << "Stop hitting him! He's already dead!!" << std::endl;
        ClapTrap::_hitPoint -= amount;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (ClapTrap::_energyPoint > 0)
    {
        std::cout << ClapTrap::_name << " recovered " << amount << " points of HP!" << std::endl;
        ClapTrap::_hitPoint += amount;
        ClapTrap::_energyPoint--;
    }else if (this->_energyPoint < 1 || this->_hitPoint < 1){
        std::cout << "Not enough energy or hitpoints are zero" << std::endl;
    }
}

std::string ClapTrap::getName(void) const{
    return _name;
}
