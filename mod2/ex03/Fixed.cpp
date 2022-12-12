#include "Fixed.h"

Fixed::Fixed() {
    raw = 0;
}

Fixed::~Fixed() {
}

Fixed::Fixed(const int n) {
    setRawBits(n << bits);
}

Fixed::Fixed(const float n) {
    setRawBits(roundf(n * (1 << bits)));
}

void Fixed::setRawBits( int const raw ){
    this->raw = raw;
}

int Fixed::getRawBits() const {
    return this->raw;
}

Fixed::Fixed(const Fixed &c) {
    *this = c;
}

Fixed &Fixed::operator=(const Fixed &c) {
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

bool Fixed::operator<(const Fixed &c) const {
    return raw < c.getRawBits();
}

bool Fixed::operator>(const Fixed &c) const {
    return raw > c.getRawBits();
}

bool Fixed::operator<=(const Fixed &c) const {
    return raw <= c.getRawBits();
}

bool Fixed::operator>=(const Fixed &c) const {
    return raw >= c.getRawBits();
}

bool Fixed::operator==(const Fixed &c) const {
    return raw == c.getRawBits();
}

bool Fixed::operator!=(const Fixed &c) const {
    return raw != c.getRawBits();
}

Fixed Fixed::operator+(const Fixed &c) const {
    return Fixed(this->toFloat() + c.toFloat());
}

Fixed Fixed::operator-(const Fixed &c) const {
    return Fixed(this->toFloat() - c.toFloat());
}

Fixed Fixed::operator*(const Fixed &c) const {
    return Fixed(this->toFloat() * c.toFloat());
}

Fixed Fixed::operator/(const Fixed &c) const {
    return Fixed(this->toFloat() / c.toFloat());
}

Fixed &Fixed::operator++(void){
    ++this->raw;
    return *this;
}

Fixed &Fixed::operator--(void){
    --this->raw;
    return *this;
}

Fixed Fixed::operator++(int){
    Fixed tmp = *this;
    this->raw++;
    return tmp;
}

Fixed Fixed::operator--(int){
    Fixed tmp = *this;
    this->raw--;
    return tmp;
}

Fixed &Fixed::min(Fixed &c, Fixed &b) {
    if(c.getRawBits() < b.getRawBits())
        return c;
    return b;
}

Fixed &Fixed::max(Fixed &c, Fixed &b) {
    if(c.getRawBits() > b.getRawBits())
        return c;
    return b;
}

const Fixed &Fixed::min(const Fixed &c, const Fixed &b) {
    if(c.getRawBits() < b.getRawBits())
        return c;
    return b;
}

const Fixed &Fixed::max(const Fixed &c, const Fixed &b) {
    if(c.getRawBits() > b.getRawBits())
        return c;
    return b;
}

std::ostream &operator<<(std::ostream &out, const Fixed &c){
    out << c.toFloat();
    return out;
}