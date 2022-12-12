#ifndef CPP_MOD_FIXED_H
#define CPP_MOD_FIXED_H
#include <iostream>

class Fixed{

public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &c);
    Fixed& operator=(const Fixed& c);
    void setRawBits(int const raw );
    int getRawBits( void ) const;
private:
    int raw;
    static  const int bits = 8;
};
#endif //CPP_MOD_FIXED_H
