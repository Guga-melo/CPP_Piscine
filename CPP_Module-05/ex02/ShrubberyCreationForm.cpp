/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 12:46:44 by gussoare          #+#    #+#             */
/*   Updated: 2023/05/09 11:17:28 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : Form(name, 145, 137), _name(name)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &shrubbery) :  _name(shrubbery._name)
{
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return ;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &shrubbery)
{
	(void) shrubbery;
	std::cout << "Error: unable to copy a class that has constant variables" << std::endl;
	return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!this->getSign())
		throw(Form::FormNotSignedException());
	else if (executor.getGrade() > this->getGradeExec())
		throw(Form::GradeTooLowException());
	else
	{
		std::string	outfile = this->_name + "_shrubbery";
		std::ofstream ofs(outfile.c_str());
		std::ifstream ifs(outfile.c_str());
		if (!ifs.fail())
		{
			std::cout << outfile << " file was created" << std::endl;
			ofs  << "               ,@@@@@@@," << std::endl;
			ofs  << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
			ofs  << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
			ofs  << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
			ofs  << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
			ofs  << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
			ofs  << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
			ofs  << "       |o|        | |         | |" << std::endl;
			ofs  << "       |.|        | |         | |" << std::endl;
			ofs  << "    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_" << std::endl;
		}
	}
}

std::ostream    &operator<<(std::ostream &o, const ShrubberyCreationForm &shrubbery)
{
	o << shrubbery.getName() <<  ": ";
	o << "signed " << std::boolalpha << shrubbery.getSign() << ", gradeSign: " << shrubbery.getGradeSign() << ", gradeExec: " << shrubbery.getGradeExec();
	return o;
}