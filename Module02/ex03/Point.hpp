#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

class Point{
    private:
        const Fixed _x;
        const  Fixed _y;
    public:
        Point();
        Point(const float x1, const float y1);
        Point(const Point & other);
        Point & operator = (const Point & other);
        ~Point();

        const  Fixed getPointX(void) const;
        const  Fixed getPointY(void) const;

};
        bool bsp( Point const a, Point const b, Point const c, Point const point);


#endif
