/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 12:20:27 by gussoare          #+#    #+#             */
/*   Updated: 2023/03/03 14:35:09 by gussoare         ###   ########.fr       */
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

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed   &Fixed::operator=(Fixed const &fixed)
{
    std::cout << "Copy assigment operator called" << std::endl;
    this->_fixedPointValue = fixed.getRawBits();
    return *this;

}

bool Fixed::operator>(Fixed const &fixed)
{
    return this->_fixedPointValue > fixed._fixedPointValue;
}

bool Fixed::operator<(Fixed const &fixed)
{
    return this->_fixedPointValue < fixed._fixedPointValue;
}

bool Fixed::operator>=(Fixed const &fixed)
{
    return this->_fixedPointValue >= fixed._fixedPointValue;
}

bool Fixed::operator<=(Fixed const &fixed)
{
    return this->_fixedPointValue <= fixed._fixedPointValue;
}

bool Fixed::operator==(Fixed const &fixed)
{
    return this->_fixedPointValue == fixed._fixedPointValue;
}

bool Fixed::operator!=(Fixed const &fixed)
{
    return this->_fixedPointValue != fixed._fixedPointValue;
}

Fixed Fixed::operator+(Fixed const &fixed)
{
    return this->_fixedPointValue + fixed._fixedPointValue;
}

Fixed Fixed::operator-(Fixed const &fixed)
{
    return this->_fixedPointValue - fixed._fixedPointValue;
}

Fixed Fixed::operator*(Fixed const &fixed)
{
    return this->toFloat() * fixed.toFloat();
}

Fixed Fixed::operator/(Fixed const &fixed)
{
    return this->toFloat() / fixed.toFloat();
}

Fixed &Fixed::operator++(void)
{
    this->_fixedPointValue++;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed old(*this);

    ++(*this);
    return (old);
}

Fixed &Fixed::operator--(void)
{
    this->_fixedPointValue--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed old(*this);

    --(*this);
    return (old);
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

Fixed &Fixed::min(Fixed &lhs, Fixed &rhs) {
	if (lhs._fixedPointValue < rhs._fixedPointValue)
		return lhs;
	return rhs;
}

Fixed const &Fixed::min(Fixed const &lhs, Fixed const &rhs) {
	if (lhs._fixedPointValue < rhs._fixedPointValue)
		return lhs;
	return rhs;
}

Fixed &Fixed::max(Fixed &lhs, Fixed &rhs) {
	if (lhs._fixedPointValue > rhs._fixedPointValue)
		return lhs;
	return rhs;
}

Fixed const &Fixed::max(Fixed const &lhs, Fixed const &rhs) {
	if (lhs._fixedPointValue > rhs._fixedPointValue)
		return lhs;
	return rhs;
}

std::ostream    &operator<<(std::ostream &o, Fixed const &fixed)
{
    o << fixed.toFloat();
    return o;
}
