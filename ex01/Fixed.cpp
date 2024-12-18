#include "Fixed.hpp"

// Default constructor
Fixed::Fixed() : fixedPointValue(0) {
    std::cout << "Default constructor called" << std::endl;
}

// Copy constructor
Fixed::Fixed(const Fixed& other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other; // Use the copy assignment operator
}

// Copy assignment operator
Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        this->fixedPointValue = other.fixedPointValue; // Copy the fixed-point value
    }
    return *this;
}

// Destructor
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

// Constructor from integer
Fixed::Fixed(const int value) {
    std::cout << "Int constructor called" << std::endl;
    this->fixedPointValue = value << fractionalBits; // Shift left by fractionalBits
}

// Constructor from floating-point
Fixed::Fixed(const float value) {
    std::cout << "Float constructor called" << std::endl;
    this->fixedPointValue = roundf(value * (1 << fractionalBits)); // Multiply and round
}

// Converts fixed-point to floating-point
float Fixed::toFloat(void) const {
    return static_cast<float>(this->fixedPointValue) / (1 << fractionalBits);
}

// Converts fixed-point to integer
int Fixed::toInt(void) const {
    return this->fixedPointValue >> fractionalBits; // Shift right by fractionalBits
}

// Get the raw fixed-point value
int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixedPointValue;
}

// Set the raw fixed-point value
void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    this->fixedPointValue = raw;
}

// Overload << operator
std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat(); // Output the floating-point representation
    return os;
}
