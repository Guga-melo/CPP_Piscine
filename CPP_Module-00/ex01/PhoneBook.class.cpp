/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:32:00 by gussoare          #+#    #+#             */
/*   Updated: 2023/02/20 11:45:50 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

Phonebook::Phonebook()
{
	this->_index = 0;
	return;
}

Contact Phonebook::getContact(int index) const
{
	return this->_contacts[index];
}

int	Phonebook::getNumberOfContacts() const
{
	return this->_count;
}

void Phonebook::setContact(Contact contact)
{
	this->_contacts[this->_index] = contact;
	if (_count < 8)
		_count += 1;
	this->_index = (this->_index + 1) % 8;
	return;
}

int Phonebook::_count = 0;
