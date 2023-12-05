/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:38:13 by gussoare          #+#    #+#             */
/*   Updated: 2023/03/03 12:14:50 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void):_fixedPointValue(0)
{
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed(int const intValue)
{
    std::cout << "Int constructor called" << std::endl;
    this->_fixedPointValue = intValue << this->_fractionalBits;
}

Fixed::Fixed(float const floatValue)
{
    std::cout << "Float constructor called" << std::endl;
    this->_fixedPointValue = roundf(floatValue * 256);
}

Fixed::Fixed(Fixed const &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
    return ;
}

Fixed   &Fixed::operator=(Fixed const &fixed)
{
    std::cout << "Copy assigment operator called" << std::endl;
    this->_fixedPointValue = fixed.getRawBits();
    return *this;

}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedPointValue;
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "Destructor called" << std::endl;
    this->_fixedPointValue = raw;
    return ;
}

float   Fixed::toFloat(void) const
{
    return float(this->_fixedPointValue) / 256;
}

int Fixed::toInt(void) const
{
    return (this->_fixedPointValue >> this->_fractionalBits);
}

std::ostream    &operator<<(std::ostream &o, Fixed const &fixed)
{
    o << fixed.toFloat();
    return o;
}
