/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 14:29:07 by gussoare          #+#    #+#             */
/*   Updated: 2023/02/20 10:45:22 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
#include <iostream>
#include <iomanip>
#include <limits>

class Contact
{
    public:
	    std::string getFirstName() const;
	    std::string getLastName() const;
	    std::string getNickName() const;
	    std::string	getPhoneNumber() const;
	    std::string getDarkestSecret() const;

	    void setFirstName(std::string name);
    	void setLastName(std::string name);
    	void setNickName(std::string name);
    	void setPhoneNumber(std::string number);
    	void setDarkestSecret(std::string secret);
    private:
	    std::string _firstName;
	    std::string _lastName;
	    std::string _nickName;
	    std::string	_phoneNumber;
	    std::string	_darkestSecret;
};

#endif