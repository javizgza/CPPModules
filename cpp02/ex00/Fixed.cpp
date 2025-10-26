/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javierzaragozatejeda <javierzaragozatej    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 20:03:49 by javierzarag       #+#    #+#             */
/*   Updated: 2025/06/17 20:33:25 by javierzarag      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_storeBits = 8;

Fixed::Fixed() : _store(0)
{
    std::cout << "Constructor called. (Default)" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed &_copy)
{
    std::cout << "COnstructor called. (Copy)" << std::endl;
    *this = _copy;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
    std::cout << "Operator called." << std::endl;
    if (this != &copy)
        this->_store = copy.getRawBits();
    return *this;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "Get Raw Bits." << std::endl;
    return (this->_store);
}

int Fixed::setRawBits( int const raw )
{
    std::cout << "Set Raw Bits." << std::endl;
    this->_store = raw;
    return raw;
}
