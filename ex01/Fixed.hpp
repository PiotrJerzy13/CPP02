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
    void setRawBits(int const raw);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif
