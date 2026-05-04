#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int main() {
	Point const a(2, 3);
	Point const b(1, 1);
	Point const c(3, 1);
	Point const x(2, 2);
	Point const z(2.0f, 2.5f);
	Point const y(3, 2);
	bool res = 0;
	res = bsp(a, b, c, x);
	if (res)
		std::cout << "Point x (" << x.getPointX() << ", " << x.getPointY() << ") is in triangle" << std::endl;
	else
		std::cout << "Point x ("  << x.getPointX() << ", " << x.getPointY() << ") NOT is in triangle" << std::endl;

	res = bsp(a, b, c, z);
	if (res)
		std::cout << "Point z (" << z.getPointX() << ", " << z.getPointY() << ") is in triangle" << std::endl;
	else
		std::cout << "Point z (" << z.getPointX() << ", " << z.getPointY() << ") NOT is in triangle" << std::endl;

	res = bsp(a, b, c, y);
	if (res)
		std::cout << "Point y (" << y.getPointX() << ", " << y.getPointY() << ") is in triangle" << std::endl;
	else
		std::cout << "Point y (" << y.getPointX() << ", " << y.getPointY() << ") NOT is in triangle" << std::endl;

	return 0;
}
