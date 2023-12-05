/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:38:20 by gussoare          #+#    #+#             */
/*   Updated: 2023/03/03 11:40:02 by gussoare         ###   ########.fr       */
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
        Fixed   &operator=(Fixed const &fixed);
        ~Fixed(void);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
    private:
        int                 _fixedPointValue;
        static const int    _fractionalBits = 8;
};

std::ostream    &operator<<(std::ostream &o, Fixed const &fixed);

#endif