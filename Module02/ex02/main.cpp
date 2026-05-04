#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl; // a=1; 1 / 256 = 0.00390.. after toFloat
	std::cout << a << std::endl;
	std::cout << a++ << std::endl; // a=2; 2/256= 0.007
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	return 0;
}
