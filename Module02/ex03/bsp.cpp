#include "Point.hpp"
#include "Fixed.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point){
	Fixed limitsAB = (a.getPointX() - point.getPointX()) * (b.getPointY() - a.getPointY())
	- (b.getPointX() - a.getPointX()) * (a.getPointY() - point.getPointY());
	Fixed limitsBC = (b.getPointX() - point.getPointX()) * (c.getPointY() - b.getPointY())
	- (c.getPointX() - b.getPointX()) * (b.getPointY() - point.getPointY());
	Fixed limitsAC = (c.getPointX() - point.getPointX()) * (a.getPointY() - c.getPointY())
	- (a.getPointX() - c.getPointX()) * (c.getPointY() - point.getPointY());

	if ((limitsAB > 0 && limitsAC > 0 && limitsBC > 0) || (limitsAB < 0 && limitsAC < 0 && limitsBC < 0))
		return (true);

	return (false);
}

