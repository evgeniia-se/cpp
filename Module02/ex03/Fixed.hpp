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

        float toFloat( void ) const;
        int toInt( void ) const;

        //comparison operators
        bool operator > (const Fixed & other) const;
        bool operator < (const Fixed & other) const;
        bool operator >= (const Fixed & other) const;
        bool operator <= (const Fixed & other) const;
        bool operator == (const Fixed & other) const;
        bool operator != (const Fixed & other) const;

        //arithmetic operators
        Fixed operator + (const Fixed & other) const;
        Fixed operator - (const Fixed & other) const;
        Fixed operator * (const Fixed & other) const;
        Fixed operator / (const Fixed & other) const;

        //increment/decrement operators
        Fixed &operator ++ (void);
        Fixed &operator -- (void);
        Fixed operator ++ (int);
        Fixed operator -- (int);

        //overload member functions
        static const Fixed & min(const Fixed & one, const Fixed & two);
        static Fixed & min( Fixed & one,  Fixed & two);
        static const Fixed & max(const Fixed & one, const Fixed & two);
        static  Fixed & max( Fixed & one, Fixed & two);
};

std::ostream& operator << (std::ostream& out, const Fixed& obj);

#endif
