/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 20:33:13 by olidon            #+#    #+#             */
/*   Updated: 2020/12/05 17:01:22 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

# include <iostream>
# include <string>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class	Intern {

public:

	Intern();
	Intern(Intern const &src);
	~Intern();

	Intern				&operator=(Intern const &rhs);

	Form				*makeForm(std::string const &name, std::string const &target);


private:
	typedef Form		*(Intern::*functionPtr)(std::string const &target);
	Form				*makeShrubberyForm(std::string const &target);
	Form				*makePresidentialForm(std::string const &target);
	Form				*makeRobotomyForm(std::string const &target);
	functionPtr			makeSpecificForm[3];

};

#endif
