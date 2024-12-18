#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

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

    // Constructors
    Fixed(const int value);                 // Constructor from integer
    Fixed(const float value);               // Constructor from floating-point

    // Conversion methods
    float toFloat(void) const;              // Converts fixed-point to float
    int toInt(void) const;                  // Converts fixed-point to integer

    // Getters and Setters
    int getRawBits(void) const;             // Returns the raw fixed-point value
    void setRawBits(int const raw);         // Sets the raw fixed-point value

    // Comparison operators
    bool operator>(const Fixed& other) const;
    bool operator<(const Fixed& other) const;
    bool operator>=(const Fixed& other) const;
    bool operator<=(const Fixed& other) const;
    bool operator==(const Fixed& other) const;
    bool operator!=(const Fixed& other) const;

    // Arithmetic operators
    Fixed operator+(const Fixed& other) const;
    Fixed operator-(const Fixed& other) const;
    Fixed operator*(const Fixed& other) const;
    Fixed operator/(const Fixed& other) const;

    // Increment/Decrement operators
    Fixed& operator++();        // Pre-increment
    Fixed operator++(int);      // Post-increment
    Fixed& operator--();        // Pre-decrement
    Fixed operator--(int);      // Post-decrement

    // Min/Max static member functions
    static Fixed& min(Fixed& a, Fixed& b);
    static const Fixed& min(const Fixed& a, const Fixed& b);
    static Fixed& max(Fixed& a, Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);
};

// Overload << operator
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif
