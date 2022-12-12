#include "Fixed.h"
#include "Point.h"

Point::Point() {
    Fixed const x(0);
    Fixed const y(0);
}

Point::Point(const float x, const float y) : x(x), y(y) {}

Point &Point::operator=(const Point &c) {
    (void)c;
    return *this;
}

Fixed Point::getX() const {
    return x;
}

Fixed Point::getY() const {
    return y;
}

Point::~Point() {}

Point::Point(const Point &c) : x(c.x), y(c.y){
}