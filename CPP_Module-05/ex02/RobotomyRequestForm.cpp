/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 09:28:43 by gussoare          #+#    #+#             */
/*   Updated: 2023/05/09 11:17:11 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string name) : Form(name, 72, 45), _name(name)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &robotomy) :  _name(robotomy._name)
{
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return ;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &robotomy)
{
	(void) robotomy;
	std::cout << "Error: unable to copy a class that has constant variables" << std::endl;
	return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (!this->getSign())
		throw(Form::FormNotSignedException());
	else if (executor.getGrade() > this->getGradeExec())
		throw(Form::GradeTooLowException());
	else
	{
		std::srand(std::time(0));
		bool random = false;

		if (std::rand() % 2 == 0)
			random = true;
		std::cout << "Drilling noises intensifies... ";
		if (random)
			std::cout << this->_name << " has been robotomized" << std::endl;
		else
			std::cout << "robotomy failed for " << this->_name << std::endl;
	}
}

std::ostream    &operator<<(std::ostream &o, const RobotomyRequestForm &robotomy)
{
	o << robotomy.getName() <<  ": ";
	o << "signed " << std::boolalpha << robotomy.getSign() << ", gradeSign: " << robotomy.getGradeSign() << ", gradeExec: " << robotomy.getGradeExec();
	return o;
}