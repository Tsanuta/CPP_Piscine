/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 16:47:45 by olidon            #+#    #+#             */
/*   Updated: 2020/12/11 10:41:54 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>
# include <string>
# include <stdexcept>

class	Form;

class	Bureaucrat {

public:

	Bureaucrat(std::string const &name, int grade);
	Bureaucrat(Bureaucrat const &src);
	~Bureaucrat();

	Bureaucrat				&operator=(Bureaucrat const &rhs);

	std::string const		&getName() const;
	int						getGrade() const;
	void					incrementGrade();
	void					decrementGrade();

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

	void					signForm(Form *rhs) const;
	void					executeForm(Form const &form);

private:
	Bureaucrat();
	std::string const		_name;
	int						_grade;

};

std::ostream			&operator<<(std::ostream &o, Bureaucrat const &i);

#endif
