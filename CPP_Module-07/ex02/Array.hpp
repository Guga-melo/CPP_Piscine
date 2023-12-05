/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 11:05:01 by gussoare          #+#    #+#             */
/*   Updated: 2023/05/24 14:09:20 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	public:
		Array(void) : _size(0), _array(new T[0]) {};
		Array(unsigned int n) : _size(n), _array(new T[n]) {};
		~Array(void)
		{
			delete [] this->_array;
		}
		
		Array(const Array& rhs)
		{
			this->_size = rhs._size;
			this->_array = new T[rhs._size];
			for (unsigned int i = 0; i < rhs._size; i++)
				this->_array[i] = rhs._array[i];
		}

		Array &operator=(const Array &rhs)
		{
			if (this != &rhs)
			{
				this->~Array();
				this->_size = rhs._size;
				this->_array = new T[rhs._size];
				for (unsigned int i = 0; i < rhs._size; i++)
					this->_array[i] = rhs._array[i];
			}
			return *this;
		}

		T &operator[](unsigned int index)
		{
			if (index >= this->_size)
				throw(OutOfRangeException());
			return this->_array[index];
		}

		int size(void)
		{
			return this->_size;
		}

		class OutOfRangeException : public std::exception
		{
			const char* what() const throw()
			{
				return ("Element is out of range");
			}
	};
	private:
		unsigned int	_size;
		T				*_array;
};

#endif