/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 19:59:47 by olidon            #+#    #+#             */
/*   Updated: 2020/12/05 16:50:12 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

# include <iostream>
# include <string>
# include <cstdlib>
# include "Form.hpp"

class	RobotomyRequestForm : public Form {

public:

	RobotomyRequestForm(std::string const &target);
	RobotomyRequestForm(RobotomyRequestForm const &src);
	virtual					~RobotomyRequestForm();

	RobotomyRequestForm		&operator=(RobotomyRequestForm const &rhs);

	virtual void			SpecificFormExec(std::string const &target) const;

private:
	RobotomyRequestForm();

};

#endif
