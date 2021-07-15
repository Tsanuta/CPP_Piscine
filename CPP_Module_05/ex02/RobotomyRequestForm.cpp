/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 20:00:31 by olidon            #+#    #+#             */
/*   Updated: 2020/12/05 16:50:26 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form("RobotomyRequestForm", 72, 45, target)
{
	srand((unsigned int)time(0));
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm				&RobotomyRequestForm::operator=(RobotomyRequestForm const &)
{
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void							RobotomyRequestForm::SpecificFormExec(std::string const &target) const
{
	int	i;

	i = rand() % 2;
	std::cout << "* drilling noise bzzzzzz *" << std::endl;
	if (i == 0)
		std::cout << target << " has been successfully robotomized" << std::endl;
	else
		std::cout << "Fail to robotomize " << target << std::endl;
}

/* ************************************************************************** */
