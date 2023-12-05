/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 10:29:06 by gussoare          #+#    #+#             */
/*   Updated: 2023/05/09 11:16:46 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string name) : Form(name, 25, 5), _name(name)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &president) :  _name(president._name)
{
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return ;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &president)
{
	(void) president;
	std::cout << "Error: unable to copy a class that has constant variables" << std::endl;
	return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (!this->getSign())
		throw(Form::FormNotSignedException());
	else if (executor.getGrade() > this->getGradeExec())
		throw(Form::GradeTooLowException());
	else
		std::cout << this->_name << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

std::ostream    &operator<<(std::ostream &o, const PresidentialPardonForm &president)
{
	o << president.getName() <<  ": ";
	o << "signed " << std::boolalpha << president.getSign() << ", gradeSign: " << president.getGradeSign() << ", gradeExec: " << president.getGradeExec();
	return o;
}