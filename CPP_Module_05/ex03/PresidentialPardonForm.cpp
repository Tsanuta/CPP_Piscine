/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 20:01:23 by olidon            #+#    #+#             */
/*   Updated: 2020/12/05 16:52:25 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form("PresidentialPardonForm", 25, 5, target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm			&PresidentialPardonForm::operator=(PresidentialPardonForm const &)
{
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void							PresidentialPardonForm::SpecificFormExec(std::string const &target) const
{
	std::cout << target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

/* ************************************************************************** */
