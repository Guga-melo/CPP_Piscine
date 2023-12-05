/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 10:29:03 by gussoare          #+#    #+#             */
/*   Updated: 2023/05/09 11:16:59 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class PresidentialPardonForm : public Form
{
    public:
		PresidentialPardonForm(std::string name);
		PresidentialPardonForm(const PresidentialPardonForm &president);
		~PresidentialPardonForm(void);

		PresidentialPardonForm &operator=(const PresidentialPardonForm &president);

		void	execute(Bureaucrat const &executor) const;

	private:
		std::string	_name;
};

std::ostream    &operator<<(std::ostream &o, const PresidentialPardonForm &president);

#endif