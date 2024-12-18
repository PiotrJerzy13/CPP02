#include "Fixed.hpp"

int main() {
    Fixed a;                // Default constructor
    Fixed b(a);             // Copy constructor
    Fixed c;                // Default constructor

    c = b;                  // Copy assignment operator

    std::cout << a.getRawBits() << std::endl; // Access raw value
    std::cout << b.getRawBits() << std::endl; // Access raw value
    std::cout << c.getRawBits() << std::endl; // Access raw value

    return 0;
}
