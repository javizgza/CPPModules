/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javierzaragozatejeda <javierzaragozatej    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 22:06:02 by javierzarag       #+#    #+#             */
/*   Updated: 2025/10/26 10:07:56 by javierzarag      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
    int                 _fixedPointValue;
    static const int    _fractionalBits = 8;

public:
    Fixed();                               // Default constructor
    Fixed(const int value);                // Int constructor
    Fixed(const float value);              // Float constructor
    Fixed(const Fixed& other);             // Copy constructor
    Fixed& operator=(const Fixed& other);  // Copy assignment
    ~Fixed();                              // Destructor

    int getRawBits(void) const;
    void setRawBits(int const raw);

    float toFloat(void) const;
    int toInt(void) const;
};

// Output operator overload
std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif
