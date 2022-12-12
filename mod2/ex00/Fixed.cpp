#include "Fixed.h"

Fixed::Fixed() {
    raw = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

void Fixed::setRawBits( int const raw ){
    this->raw = raw;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->raw;
}

Fixed::Fixed(const Fixed &c) {
    std::cout << "Copy constructor called" << std::endl;
    *this = c;
}

Fixed &Fixed::operator=(const Fixed &c) {
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &c){
        this->raw = c.getRawBits();
        }
    
    return *this;
}