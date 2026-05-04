#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed{
    private:
        int _value;
        static const int _bits = 8;
    public:
        Fixed();
        Fixed(const Fixed & other);
        Fixed & operator = (const Fixed & other);
        Fixed(const int a);
        Fixed(const float a);
        ~Fixed();

        int getRawBits( void ) const;
        void setRawBits( int const raw );
        //new
        float toFloat( void ) const;
        int toInt( void ) const;
};
//overload
std::ostream& operator << (std::ostream& out, const Fixed& obj);

#endif
