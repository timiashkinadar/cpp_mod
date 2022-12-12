#include "Fixed.h"

Fixed::Fixed() {
    raw = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int n) {
    std::cout << "Int constructor called" << std::endl;
    setRawBits(n << bits);
}

Fixed::Fixed(const float n) {
    std::cout << "Float constructor called" << std::endl;
    setRawBits(roundf(n * (1 << bits)));
}

void Fixed::setRawBits( int const raw ){
    this->raw = raw;
}

int Fixed::getRawBits() const {
    return this->raw;
}

Fixed::Fixed(const Fixed &c) {
    std::cout << "Copy constructor called" << std::endl;
    *this = c;
}

Fixed &Fixed::operator=(const Fixed &c) {
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &c)
        this->raw = c.getRawBits();
    return *this;
}

int Fixed::toInt() const {
    return (roundf(this->toFloat()));
}

float Fixed::toFloat() const {
    return (this->raw / (float)(1 << bits));
}

std::ostream &operator<<(std::ostream& out, const Fixed& c){
    out << c.toFloat();
    return out;
}