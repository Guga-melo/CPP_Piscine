/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 11:05:50 by gussoare          #+#    #+#             */
/*   Updated: 2023/04/26 09:00:15 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	try
	{
		Form	test("exam", 70, 100);
		Bureaucrat	bu("guga", 70);

		std::cout << test << std::endl;
		std::cout << bu << std::endl;
		bu.signForm(test);
		std::cout << test << std::endl;
		bu.decrementGrade();
		std::cout << bu << std::endl;
		bu.incrementGrade();
		std::cout << bu << std::endl;
		bu.decrementGrade();
		std::cout << bu << std::endl;
		bu.decrementGrade();
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}