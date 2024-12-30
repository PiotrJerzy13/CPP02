#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed 
{
private:
    int fixedPointValue;
    static const int fractionalBits = 8;

public:

    Fixed();
    Fixed(const Fixed& other);
    Fixed& operator=(const Fixed& other);
    ~Fixed();

    explicit Fixed(const int value);
    explicit Fixed(const float value);

    float toFloat(void) const;
    int toInt(void) const;

    int getRawBits(void) const;

    bool operator>(const Fixed& other) const;
    bool operator<(const Fixed& other) const;
    bool operator>=(const Fixed& other) const;
    bool operator<=(const Fixed& other) const;
    bool operator==(const Fixed& other) const;
    bool operator!=(const Fixed& other) const;

    Fixed operator+(const Fixed& other) const;
    Fixed operator-(const Fixed& other) const;
    Fixed operator*(const Fixed& other) const;
    Fixed operator/(const Fixed& other) const;

    Fixed& operator++();
    Fixed operator++(int);
    Fixed& operator--();
    Fixed operator--(int);

    static Fixed& min(const Fixed& a, Fixed& b);
    static const Fixed& min(const Fixed& a, const Fixed& b);
    static Fixed& max(const Fixed& a, Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif
