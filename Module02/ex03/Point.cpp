#include "Point.hpp"

	Point::Point() : _x(0), _y(0) {}

	Point::Point(const float x1, float const y1) : _x(x1), _y(y1) {}

	Point::Point(const Point & other) : _x(other._x), _y(other._y) {}

	Point & Point::operator = (const Point & other){
		(void)other;
		return (*this);
	}

	Point::~Point(){}

	const  Fixed Point::getPointX(void) const{
		return (this->_x);
	}
	const  Fixed Point::getPointY(void) const{
		return (this->_y);
	}





