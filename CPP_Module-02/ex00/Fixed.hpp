/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:22:29 by gussoare          #+#    #+#             */
/*   Updated: 2023/02/28 14:40:43 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class   Fixed
{
    public:
        Fixed(void);
        Fixed(const Fixed &fixed);
        Fixed   &operator=(const Fixed &fixed);
        ~Fixed(void);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
    private:
        int                 _fixedPointValue;
        static const int    _fractionalBits = 8;
};

#endif