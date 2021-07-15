/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 16:46:45 by olidon            #+#    #+#             */
/*   Updated: 2020/12/11 10:51:35 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name)
{
	// try catch a implementer si too high or too low
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade = grade;
}


Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src.getName())
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat				&Bureaucrat::operator=(Bureaucrat const &rhs)
{
	if (this != &rhs)
		_grade = rhs._grade;
	return *this;
}

std::ostream			&operator<<(std::ostream &o, Bureaucrat const &i)
{
	o << i.getName() << ", bureaucrate grade " << i.getGrade();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string const		&Bureaucrat::getName() const
{
	return _name;
}

int						Bureaucrat::getGrade() const
{
	return _grade;
}

void					Bureaucrat::incrementGrade()
{
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade -= 1;
}

void					Bureaucrat::decrementGrade()
{
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade += 1;
}

void					Bureaucrat::signForm(Form *rhs) const
{
	if (rhs)
	{
		if (_grade <= rhs->getRequiredSign() && rhs->getSigned() == false)
			std::cout << _name << " signs " << rhs->getName() << std::endl;
		else if (_grade > rhs->getRequiredSign())
			std::cout << _name << " cannot sign " << rhs->getName() << " because his grade is too low" << std::endl;
		else
			std::cout << _name << " cannot sign " << rhs->getName() << " because form is already signed" << std::endl;
		rhs->beSigned(*this);
	}
	else
		std::cout << _name << " cannot sign " << rhs->getName() << " because form doesn't exist" << std::endl;
}

/* ************************************************************************** */
