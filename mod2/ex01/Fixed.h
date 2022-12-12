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
private:
    int raw;
    static  const int bits = 8;
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);
#endif //CPP_MOD_FIXED_H
