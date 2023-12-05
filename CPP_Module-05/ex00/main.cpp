/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 11:05:50 by gussoare          #+#    #+#             */
/*   Updated: 2023/04/25 10:42:07 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat bu("guga", 149);
		std::cout << bu << std::endl;
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