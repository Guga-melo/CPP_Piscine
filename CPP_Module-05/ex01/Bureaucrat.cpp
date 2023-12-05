/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 09:35:19 by gussoare          #+#    #+#             */
/*   Updated: 2023/04/26 09:01:17 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _name("nobody"), _grade(150)
{
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw(Bureaucrat::GradeTooHighException());
	else if (grade > 150)
		throw(Bureaucrat::GradeTooLowException());
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat)
{
	*this = bureaucrat;
	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	return ;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{
	this->_name = bureaucrat._name;
	this->_grade = bureaucrat._grade;
	return *this;
}

std::string	Bureaucrat::getName(void) const
{
	return this->_name;
}

int	Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

void	Bureaucrat::incrementGrade(void)
{
	if (this->_grade == 1)
	{
		throw(Bureaucrat::GradeTooHighException());
	}
	this->_grade--;
}

void	Bureaucrat::decrementGrade(void)
{
	if (this->_grade == 150)
	{
		throw(Bureaucrat::GradeTooLowException());
	}
	this->_grade++;
}

void	Bureaucrat::signForm(Form &form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << this->getName() << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
	}
}


const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Exception: Grade too High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Exception: Grade too Low";
}

std::ostream    &operator<<(std::ostream &o, const Bureaucrat &bureaucrat)
{
	o << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return o;
}
