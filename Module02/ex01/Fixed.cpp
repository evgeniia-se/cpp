#include "Fixed.hpp"

	Fixed::Fixed() : _value(0){
		std::cout << "Default constructor called" << std::endl;
	}

	Fixed::Fixed(const Fixed & other){
		std::cout << "Copy constructor called" << std::endl;
		*this = other;
	}

	Fixed &Fixed::operator = (const Fixed & other){
		std::cout << "Copy assignment operator called" << std::endl;
		if (this != &other)
			this->_value = other.getRawBits();
		return *this;
	}

	Fixed::Fixed(const int a){
		this->_value = a << _bits;
		std::cout << "Int constructor called" << std::endl;
	}

	Fixed::Fixed(const float a){
		this->_value = roundf(a * (1 << _bits));
		std::cout << "Float constructor called" << std::endl;
	}

	Fixed::~Fixed(){
		std::cout << "Destructor called" << std::endl;
	}


	int Fixed::getRawBits( void ) const{
		return (this->_value);
	}
	void Fixed::setRawBits(const int raw ){
		this->_value = raw;
	}


	//new
	float Fixed::toFloat( void ) const{
		return((float)this->_value / (1 << _bits)); // interdit << for float (/256)
	}

    int Fixed::toInt( void ) const{
		return(this->_value >> _bits);
	}
//overload <<
	std::ostream & operator << (std::ostream & out, const Fixed & obj){
		out << obj.toFloat();
		return (out);
	}
