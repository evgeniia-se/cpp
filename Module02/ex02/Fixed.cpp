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

	float Fixed::toFloat( void ) const{
		return((float)this->_value / (1 << _bits));
	}

    int Fixed::toInt( void ) const{
		return(this->_value >> _bits);
	}


	//comparison operators
	bool Fixed::operator > (const Fixed & other) const{
		return(_value > other._value);
	}

	bool Fixed::operator < (const Fixed & other) const{
		return(_value < other._value);
	}

	bool Fixed::operator >= (const Fixed & other) const{
		return(_value >= other._value);
	}

	bool Fixed::operator <= (const Fixed & other) const{
		return(_value <= other._value);
	}

	bool Fixed::operator == (const Fixed & other) const{
		return(_value == other._value);
	}

	bool Fixed::operator != (const Fixed & other) const{
		return(_value != other._value);
	}

	//arithmetic operators
	Fixed Fixed::operator + (const Fixed & other) const{
		Fixed res;
		res.setRawBits(_value + other._value);
		return (res);
	}

	Fixed Fixed::operator - (const Fixed & other) const{
		Fixed res;
		res.setRawBits(_value - other._value);
		return (res);
	}

	Fixed Fixed::operator * (const Fixed & other) const{
		Fixed res;
		res.setRawBits(((long long)_value * (long long)other._value) >> _bits);
		return (res);
	}

	Fixed Fixed::operator / (const Fixed & other) const{
		Fixed res;
		res.setRawBits(((long long)_value << _bits) / other._value);
		return (res);
	}

	//increment/decrement operators
	Fixed & Fixed::operator ++ (void){ //prefix
		++_value;
		return (*this);
	}

	Fixed Fixed::operator ++ (int){ //postfix
		Fixed temp(*this);
		_value++;
		return(temp);
	}

	Fixed & Fixed::operator -- (void){ //pref
		--_value;
		return(*this);
	}

	Fixed Fixed::operator -- (int){ //post
		Fixed temp = *this;
		_value--;
		return(temp);
	}

	//overload member functions

	Fixed & Fixed::min( Fixed & one,  Fixed & two){
		if (one <= two)
			return (one);
		else
			return (two);
	}

	const Fixed & Fixed::min(const Fixed & one, const Fixed & two){
		if (one <= two)
			return (one);
		else
			return (two);
	}


	const Fixed & Fixed::max(const Fixed & one, const Fixed & two){
		if (one >= two)
			return (one);
		else
			return (two);
	}

	Fixed & Fixed::max( Fixed & one, Fixed & two){
		if (one >= two)
			return (one);
		else
			return (two);
	}

	//overload <<
	std::ostream & operator << (std::ostream & out, const Fixed & obj){
		out << obj.toFloat();
		return (out);
	}
