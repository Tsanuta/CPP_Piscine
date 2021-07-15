/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 19:57:23 by olidon            #+#    #+#             */
/*   Updated: 2020/12/05 16:50:35 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

# include <iostream>
# include <string>
# include <sstream>
# include <fstream>
# include "Form.hpp"

class	ShrubberyCreationForm : public Form {

public:

	ShrubberyCreationForm(std::string const &target);
	ShrubberyCreationForm(ShrubberyCreationForm const &src);
	virtual					~ShrubberyCreationForm();

	ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &rhs);

	virtual void			SpecificFormExec(std::string const &target) const;

private:
	ShrubberyCreationForm();

};

#endif
