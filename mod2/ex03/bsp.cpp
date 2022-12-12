#include "Point.h"
#include "Fixed.h"

int	Product(Point const a, Point const b, Point const p)
{
    Point	ab(b.getX().toFloat() - a.getX().toFloat(), b.getY().toFloat() - a.getY().toFloat());
    Point	ap(p.getX().toFloat() - a.getX().toFloat(), p.getY().toFloat() - a.getY().toFloat());
    Fixed	product(ab.getX() * ap.getY() - ab.getY() * ap.getX());

    if (product.toFloat() > 0)
        return (1);
    else
        return (-1);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    int	cross_product;

    cross_product = Product(a, b, point) + Product(b, c, point) + Product(c, a, point);
    if (cross_product == 3 || cross_product == -3)
        return (true);
    else
        return (false);
}
