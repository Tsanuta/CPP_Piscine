/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 16:48:34 by olidon            #+#    #+#             */
/*   Updated: 2020/12/11 13:33:37 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int		main()
{
	try
	{
		Intern	someRandomIntern;
		Form	*robotomyform;
		Form	*presidentialform;
		Form	*shrubberyform;
		Form	*nullform;

		robotomyform = someRandomIntern.makeForm("robotomy request", "Bender");
		presidentialform = someRandomIntern.makeForm("presidential request", "Tricia McMillan");
		shrubberyform = someRandomIntern.makeForm("shrubbery request", "nights Who Say Ni!");
		nullform = someRandomIntern.makeForm("blah", "nights Who Say Ni!");

		std::cout << *presidentialform << std::endl;
		std::cout << *robotomyform << std::endl;
		std::cout << *shrubberyform << std::endl;
		if (nullform == NULL)
			std::cout << "nullform is NULL" << std::endl;

		Bureaucrat	*vog = new Bureaucrat("Vogon", 147);
		Bureaucrat	*dir = new Bureaucrat("Director Vogon", 2);

		std::cout << *vog << std::endl;
		std::cout << *dir << std::endl;

		dir->signForm(presidentialform);
		dir->signForm(robotomyform);
		dir->signForm(shrubberyform);

		std::cout << *presidentialform << std::endl;
		std::cout << *robotomyform << std::endl;
		std::cout << *shrubberyform << std::endl;
		try
		{
			vog->executeForm(*presidentialform);
		}
		catch(const std::exception& e)
		{
			std::cerr << "Error: " << e.what() << std::endl;
		}
		try
		{
			vog->executeForm(*robotomyform);
		}
		catch(const std::exception& e)
		{
			std::cerr << "Error: " << e.what() << std::endl;
		}
		try
		{
			vog->executeForm(*shrubberyform);
		}
		catch(const std::exception& e)
		{
			std::cerr << "Error: " << e.what() << std::endl;
		}

		dir->executeForm(*presidentialform);
		dir->executeForm(*robotomyform);
		dir->executeForm(*robotomyform);
		dir->executeForm(*robotomyform);
		dir->executeForm(*shrubberyform);
		delete vog;
		delete dir;
		delete presidentialform;
		delete robotomyform;
		delete shrubberyform;
	}
	catch(const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	return 0;
}
