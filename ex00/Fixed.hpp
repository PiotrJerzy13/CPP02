#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
    int fixedPointValue;                      // Stores the fixed-point value
    static const int fractionalBits = 8;     // Number of fractional bits (constant)

public:
    // Orthodox Canonical Form
    Fixed();                                 // Default constructor
    Fixed(const Fixed& other);              // Copy constructor
    Fixed& operator=(const Fixed& other);   // Copy assignment operator
    ~Fixed();                                // Destructor

    // Getters and Setters
    int getRawBits(void) const;             // Returns the raw fixed-point value
    void setRawBits(int const raw);         // Sets the raw fixed-point value
};

#endif
