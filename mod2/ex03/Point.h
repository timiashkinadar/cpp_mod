#ifndef CPP_MOD_POINT_H
#define CPP_MOD_POINT_H
#include "Fixed.h"

class Point {
private:
    Fixed const x;
    Fixed const y;
public:
    Point();
    ~Point();
    Point(const Point &c);
    Point &operator=(const Point &c);
    Point (const float x, const float y);
    Fixed getX() const;
    Fixed getY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif //CPP_MOD_POINT_H
