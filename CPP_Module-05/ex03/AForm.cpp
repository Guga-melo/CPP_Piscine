/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 11:30:30 by gussoare          #+#    #+#             */
/*   Updated: 2023/05/09 11:17:42 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

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

Form::Form(const Form &Form) : _name(Form._name), _gradeToSign(Form._gradeToSign), _gradeToExec(Form._gradeToExec)
{
	this->_signed = Form._signed;
	return ;
}

Form::~Form(void)
{
	return ;
}

Form &Form::operator=(const Form &form)
{
	this->_signed = form.getSign();
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

void	Form::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->_gradeToExec)
		throw(Form::GradeTooLowException());
	else if (!this->_signed)
		throw(Form::FormNotSignedException());
	else
		return ;
}



const char* Form::GradeTooHighException::what() const throw()
{
	return "Exception: Grade too High";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Exception: Grade too Low";
}

const char* Form::FormNotSignedException::what() const throw()
{
	return "Exception: Form has not been signed";
}

std::ostream    &operator<<(std::ostream &o, const Form &Form)
{
	o << Form.getName() <<  ": ";
	o << "signed " << std::boolalpha << Form.getSign() << ", gradeSign: " << Form.getGradeSign() << ", gradeExec: " << Form.getGradeExec();
	return o;
}
