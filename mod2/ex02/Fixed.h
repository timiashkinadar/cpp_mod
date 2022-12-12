#ifndef CPP_MOD_FIXED_H
#define CPP_MOD_FIXED_H
#include <iostream>
#include <math.h>

class Fixed{

public:
    Fixed();
    ~Fixed();
    Fixed(const int n);
    Fixed(const float n);
    Fixed(const Fixed& c);
    Fixed& operator=(const Fixed& c);
    void setRawBits(int const raw );
    int getRawBits( void ) const;
    float toFloat( void ) const;
    int toInt( void ) const;
    bool operator<(const Fixed &c) const;
    bool operator>(const Fixed &c) const;
    bool operator<=(const Fixed &c) const;
    bool operator>=(const Fixed &c) const;
    bool operator==(const Fixed &c) const;
    bool operator!=(const Fixed &c) const;
    Fixed operator+(const Fixed &c) const;
    Fixed operator-(const Fixed &c) const;
    Fixed operator*(const Fixed &c) const;
    Fixed operator/(const Fixed &c) const;
    Fixed &operator++(void);
    Fixed  operator++(int);
    Fixed &operator--(void);
    Fixed  operator--(int);
    static Fixed &min(Fixed &c, Fixed &b);
    static Fixed &max(Fixed &c, Fixed &b);
    static const Fixed &min(const Fixed &c, const Fixed &b);
    static const Fixed &max(const Fixed &c, const Fixed &b);
private:
    int raw;
    static  const int bits = 8;
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);
#endif //CPP_MOD_FIXED_H
