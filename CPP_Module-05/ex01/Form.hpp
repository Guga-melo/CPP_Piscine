/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 11:01:01 by gussoare          #+#    #+#             */
/*   Updated: 2023/04/26 08:15:38 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    public:
		Form(void);
		Form(std::string name, int gradeToSign, int gradeToExec);
		Form(const Form &form);
		~Form(void);

		Form &operator=(const Form &form);

		std::string	getName(void) const;
		bool		getSign(void) const;
		int			getGradeSign(void) const;
		int			getGradeExec(void) const;
		void		beSigned(const Bureaucrat &bureaucrat);

		class GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			virtual const char* what() const throw();
		};
		
    private:
        const std::string	_name;
        bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExec;	
};

std::ostream    &operator<<(std::ostream &o, const Form &form);


#endif