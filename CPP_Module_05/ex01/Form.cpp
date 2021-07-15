/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 16:09:31 by olidon            #+#    #+#             */
/*   Updated: 2020/12/11 13:44:50 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form() : _required_sign(1), _required_exec(1)
{
}

Form::Form(std::string const &name, int const required_sign, int const required_exec) : _name(name), _required_sign(required_sign), _required_exec(required_exec)
{
	_signed = false;
	if (required_exec < 1 || required_sign < 1)
		throw Form::GradeTooHighException();
	if (required_exec > 150 || required_sign > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &src) : _name(src.getName()), _required_sign(src.getRequiredSign()), _required_exec(src.getRequiredExec())
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form				&Form::operator=(Form const &rhs)
{
	if (this != &rhs)
		_signed = rhs._signed;
	return *this;
}

std::ostream		&operator<<(std::ostream &o, Form const &i)
{
	if (i.getSigned() == true)
		o << "The form " << i.getName() << " require grade " << i.getRequiredSign() << " to be signed and grade " << i.getRequiredExec() << " to be executed it's status is currently : signed";
	else
		o << "The form " << i.getName() << " require grade " << i.getRequiredSign() << " to be signed and grade " << i.getRequiredExec() << " to be executed it's status is currently : unsigned";
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::string const	&Form::getName() const
{
	return _name;
}

bool				Form::getSigned() const
{
	return _signed;
}

int					Form::getRequiredExec() const
{
	return _required_exec;
}

int					Form::getRequiredSign() const
{
	return _required_sign;
}

void				Form::beSigned(Bureaucrat const &rhs)
{
	if (_required_sign >= rhs.getGrade() && _signed == false)
		_signed = true;
	else if (_required_sign < rhs.getGrade())
		throw Form::GradeTooLowException();
	else
		throw Form::AlreadySignedException();
}

/* ************************************************************************** */
