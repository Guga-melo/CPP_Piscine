/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 11:30:30 by gussoare          #+#    #+#             */
/*   Updated: 2023/04/26 09:02:22 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("Zé nobody"), _gradeToSign(1), _gradeToExec(1)
{
    this->_signed = false;
	return ;
}

Form::Form(std::string name, int gradeToSign, int gradeToExec) : _name(name), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
    this->_signed = 0;
    if (gradeToSign < 1 || gradeToExec < 1)
		throw(Bureaucrat::GradeTooHighException());
	else if (gradeToExec > 150 || gradeToExec > 150)
		throw(Bureaucrat::GradeTooLowException());
	return ;
}

Form::Form(const Form &form) : _name(form._name), _gradeToSign(form._gradeToSign), _gradeToExec(form._gradeToExec)
{
	this->_signed = form._signed;
	return ;
}

Form::~Form(void)
{
	return ;
}

Form &Form::operator=(const Form &form)
{
	(void) form;
	std::cout << "Error: unable to copy a class that has constant variables" << std::endl;
	return *this;
}

std::string	Form::getName(void) const
{
	return this->_name;
}

bool	Form::getSign(void) const
{
    return this->_signed;
}

int	Form::getGradeSign(void) const
{
	return this->_gradeToSign;
}

int	Form::getGradeExec(void) const
{
	return this->_gradeToExec;
}

void	Form::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() <= this->_gradeToSign)
        this->_signed = true;
    else
        throw(Form::GradeTooLowException());
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Exception: Grade too High";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Exception: Grade too Low";
}

std::ostream    &operator<<(std::ostream &o, const Form &form)
{
	o << form.getName() <<  ": ";
	o << "signed " << std::boolalpha << form.getSign() << ", gradeSign: " << form.getGradeSign() << ", gradeExec: " << form.getGradeExec();
	return o;
}
