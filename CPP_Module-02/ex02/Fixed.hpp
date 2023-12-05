/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 12:20:04 by gussoare          #+#    #+#             */
/*   Updated: 2023/03/03 14:26:20 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class   Fixed
{
    public:

        Fixed(void);
        Fixed(int const intValue);
		Fixed(float const floatValue);
        Fixed(Fixed const &fixed);
        ~Fixed(void);

        Fixed &operator=(Fixed const &fixed);
		bool operator>(Fixed const &fixed);
		bool operator<(Fixed const &fixed);
		bool operator>=(Fixed const &fixed);
		bool operator<=(Fixed const &fixed);
		bool operator==(Fixed const &fixed);
		bool operator!=(Fixed const &fixed);
		Fixed operator+(Fixed const &fixed);
		Fixed operator-(Fixed const &fixed);
		Fixed operator*(Fixed const &fixed);
		Fixed operator/(Fixed const &fixed);
		Fixed operator++(int);
		Fixed &operator++(void);
		Fixed operator--(int);
		Fixed &operator--(void);

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
        static Fixed &min(Fixed &lhs, Fixed &rhs);
		static Fixed const &min(Fixed const &lhs, Fixed const &rhs);
		static Fixed &max(Fixed &lhs, Fixed &rhs);
		static Fixed const &max(Fixed const &lhs, Fixed const &rhs);

    private:
    
        int                 _fixedPointValue;
        static const int    _fractionalBits = 8;
};

std::ostream    &operator<<(std::ostream &o, Fixed const &fixed);

#endif
