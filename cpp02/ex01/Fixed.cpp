#include "Fixed.hpp"
#include <cmath>   // for roundf

// Default constructor
Fixed::Fixed() : _fixedPointValue(0) {
    std::cout << "Default constructor called" << std::endl;
}

// Int constructor
Fixed::Fixed(const int value) {
    std::cout << "Int constructor called" << std::endl;
    _fixedPointValue = value << _fractionalBits; // multiply by 256
}

// Float constructor
Fixed::Fixed(const float value) {
    std::cout << "Float constructor called" << std::endl;
    _fixedPointValue = roundf(value * (1 << _fractionalBits));
}

// Copy constructor
Fixed::Fixed(const Fixed& other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

// Copy assignment
Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        _fixedPointValue = other.getRawBits();
    return *this;
}

// Destructor
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
    // std::cout << "getRawBits member function called" << std::endl;
    return _fixedPointValue;
}

void Fixed::setRawBits(int const raw) {
    _fixedPointValue = raw;
}

float Fixed::toFloat(void) const {
    return (float)_fixedPointValue / (1 << _fractionalBits);
}

int Fixed::toInt(void) const {
    return _fixedPointValue >> _fractionalBits;
}

// Operator overload to print Fixed as float
std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
    out << fixed.toFloat();
    return out;
}
