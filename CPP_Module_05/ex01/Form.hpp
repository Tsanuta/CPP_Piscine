/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 16:08:41 by olidon            #+#    #+#             */
/*   Updated: 2020/12/11 10:24:11 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

# include <iostream>
# include <string>

class	Bureaucrat;

class	Form {

public:

	Form(std::string const &name, int const required_sign, int const required_exec);
	Form(Form const &src);
	~Form();

	Form				&operator=(Form const &rhs);

	class	GradeTooHighException : public std::exception {
	public:
		virtual const char	*what() const throw() {
			return "Grade is too high"; }
	};
	class	GradeTooLowException : public std::exception {
	public:
		virtual const char	*what() const throw() {
			return "Grade is too low"; }
	};
	class	AlreadySignedException : public std::exception {
	public:
		virtual const char	*what() const throw() {
			return "Form is already signed"; }
	};

	std::string const	&getName() const;
	int					getRequiredSign() const;
	int					getRequiredExec() const;
	bool				getSigned() const;
	void				beSigned(Bureaucrat const &rhs);

private:
	Form();
	std::string const	_name;
	int const			_required_sign;
	int const			_required_exec;
	bool				_signed;

};

std::ostream			&operator<<(std::ostream &o, Form const &i);

#endif
