/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 16:48:34 by olidon            #+#    #+#             */
/*   Updated: 2020/12/11 13:33:11 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int		main()
{
	try
	{
		PresidentialPardonForm *presidentialform = new PresidentialPardonForm("Tricia McMillan");
		RobotomyRequestForm *robotomyform = new RobotomyRequestForm("Bender");
		ShrubberyCreationForm *shrubberyform = new ShrubberyCreationForm("Knights Who Say Ni!");

		std::cout << *presidentialform << std::endl;
		std::cout << *robotomyform << std::endl;
		std::cout << *shrubberyform << std::endl;

		Bureaucrat	*vog = new Bureaucrat("Vogon", 147);
		Bureaucrat	*dir = new Bureaucrat("Director Vogon", 2);

		std::cout << *vog << std::endl;
		std::cout << *dir << std::endl;

		// can't execute 'cause not signed
		try
		{
			dir->executeForm(*presidentialform);
		}
		catch(const std::exception& e)
		{
			std::cerr << "Error: " << e.what() << std::endl;
		}

		dir->signForm(presidentialform);
		dir->signForm(robotomyform);
		dir->signForm(shrubberyform);

		// already signed exception
		try
		{
			dir->signForm(presidentialform);
		}
		catch(const std::exception& e)
		{
			std::cerr << "Error: " << e.what() << std::endl;
		}

		std::cout << *presidentialform << std::endl;
		std::cout << *robotomyform << std::endl;
		std::cout << *shrubberyform << std::endl;
		// grade too low exeption
		try
		{
			vog->executeForm(*presidentialform);
		}
		catch(const std::exception& e)
		{
			std::cerr << "Error: " << e.what() << std::endl;
		}
		// grade too low exeption
		try
		{
			vog->executeForm(*robotomyform);
		}
		catch(const std::exception& e)
		{
			std::cerr << "Error: " << e.what() << std::endl;
		}
		// grade too low exeption
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
