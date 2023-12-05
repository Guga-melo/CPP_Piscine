/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:47:10 by gussoare          #+#    #+#             */
/*   Updated: 2023/02/20 11:33:03 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLAS_HPP
# define PHONEBOOK_CLAS_HPP
# include "Contact.class.hpp"

class Phonebook
{
	public:
		Phonebook();
		Contact getContact(int index) const;
		int		getNumberOfContacts() const;
		void setContact(Contact contact);
	private:
		static int		_count;
		Contact _contacts[8];
		int		_index;
};

#endif