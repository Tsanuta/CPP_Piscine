/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 20:32:16 by olidon            #+#    #+#             */
/*   Updated: 2020/12/11 13:49:36 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
	makeSpecificForm[0] = &Intern::makeShrubberyForm;
	makeSpecificForm[1] = &Intern::makePresidentialForm;
	makeSpecificForm[2] = &Intern::makeRobotomyForm;
}

Intern::Intern(const Intern &src)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern				&Intern::operator=(Intern const &rhs)
{
	if (this != &rhs)
	{
		makeSpecificForm[0] = rhs.makeSpecificForm[0];
		makeSpecificForm[1] = rhs.makeSpecificForm[1];
		makeSpecificForm[2] = rhs.makeSpecificForm[2];
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

Form				*Intern::makeForm(std::string const &name, std::string const &target)
{
	std::string names[3] = {"shrubbery request", "presidential request", "robotomy request"};

	for (int i = 0; i < 3; ++i)
	{
		if (names[i] == name)
		{
			std::cout << "Intern creates " << name << std::endl;
			return (this->*makeSpecificForm[i])(target);
		}
	}
	std::cout << "Form not found" << std::endl;
	return NULL;
}

Form				*Intern::makeShrubberyForm(std::string const &target)
{
	return new ShrubberyCreationForm(target);
}

Form				*Intern::makePresidentialForm(std::string const &target)
{
	return new PresidentialPardonForm(target);
}

Form				*Intern::makeRobotomyForm(std::string const &target)
{
	return new RobotomyRequestForm(target);
}

/* ************************************************************************** */
