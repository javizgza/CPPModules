/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javierzaragozatejeda <javierzaragozatej    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 20:06:09 by javierzarag       #+#    #+#             */
/*   Updated: 2025/06/17 20:27:51 by javierzarag      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Fixed
{
    private:
        int                 _store;
        static const int    _storeBits;
    public:
        Fixed();
        Fixed(Fixed& _copy);
        ~Fixed();
        Fixed &operator = (const Fixed &copy);
        
        int getRawBits( void ) const;
        int setRawBits( int const raw );
};

#endif