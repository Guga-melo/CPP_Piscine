/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:37:10 by gussoare          #+#    #+#             */
/*   Updated: 2023/02/20 11:32:38 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

std::string trunc(std::string str)
{
	if (str.size() >= 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void addContact(Phonebook *phonebook)
{
    Contact     contact;
    std::string input;

    std::cout << "First name: ";
    std::cin >> input;
    contact.setFirstName(input);
    std::cout << "Last name: ";
    std::cin >> input;
    contact.setLastName(input); 
    std::cout << "Nickname: ";
    std::cin >> input;
    contact.setNickName(input);
    std::cout << "Phone number: ";
    std::cin >> input;
    contact.setPhoneNumber(input);
    std::cout << "Darkest secret: ";
    std::cin >> input;
    contact.setDarkestSecret(input);
    phonebook->setContact(contact);
}

void searchContact(Phonebook *phonebook)
{
	int index;
	int count;

	count = phonebook->getNumberOfContacts();
	std::cout << "┌──────────┬──────────┬──────────┬──────────┐" << std::endl;
	std::cout << "│" << std::setw(10) << std::left << "index";
	std::cout << "│" << std::setw(10) << std::left << "first name";
	std::cout << "│" << std::setw(10) << std::left << "last name";
	std::cout << "│" << std::setw(10) << std::left << "nickname" << "│" << std::endl;
	std::cout << "├──────────┼──────────┼──────────┼──────────┤" << std::endl;
	for (int i=0; i < phonebook->getNumberOfContacts(); i++)
	{
		Contact contact;
		contact = phonebook->getContact(i);
		std::cout << "│" << std::setw(10) << i + 1;
		std::cout << "│" << std::setw(10) << trunc(contact.getFirstName());
		std::cout << "│" << std::setw(10) << trunc(contact.getLastName());
		std::cout << "│" << std::setw(10) << trunc(contact.getNickName()) << "│" << std::endl;
	}
	std::cout << "└──────────┴──────────┴──────────┴──────────┘" << std::endl;
	if (count > 0)
	{
		std::cout << "Write the index of the person that you want to search for: ";
		while (!(std::cin >> index) || index < 1 || index > count)
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid index" << std::endl;
			std::cout << "Write the index of the person that you want to search for: ";

		}
		index--;
		Contact search;
		search = phonebook->getContact(index);
		std::cout << std::endl;
		std::cout << "First name--> " << search.getFirstName() << std::endl;
		std::cout << "Last name--> " << search.getLastName() << std::endl;
		std::cout << "Nickname--> " << search.getNickName() << std::endl;
		std::cout << "Phone number--> " << search.getPhoneNumber() << std::endl;
		std::cout << "Darkest secret--> " << search.getDarkestSecret() << std::endl;
	}
	else
		std::cout << "there are no current contacts in your phonebook" << std::endl; 
}

int main()
{
	Phonebook phonebook;

	std::cout << "Command info: " << std::endl;
	std::cout << " -ADD: to add a contact" << std::endl;
	std::cout << " -SEARCH: search for a contact" << std::endl;
	std::cout << " -EXIT: toss the phonebook through a window" << std::endl;
	while (1)
	{
		std::string input;
		std::cout << std::endl << "Enter a command: ";
		std::cin >> input;
		if (input == "ADD")
			addContact(&phonebook);
		else if (input == "SEARCH")
			searchContact(&phonebook);
		else if (input == "EXIT" || input == "")
			break;
	}
}