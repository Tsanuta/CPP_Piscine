/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 20:02:13 by olidon            #+#    #+#             */
/*   Updated: 2020/12/05 16:52:32 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

# include <iostream>
# include <string>
# include "Form.hpp"

class	PresidentialPardonForm : public Form {

public:

	PresidentialPardonForm(std::string const &target);
	PresidentialPardonForm(PresidentialPardonForm const &src);
	virtual					~PresidentialPardonForm();

	PresidentialPardonForm	&operator=(PresidentialPardonForm const &rhs);

	virtual void			SpecificFormExec(std::string const &target) const;

private:
	PresidentialPardonForm();

};

#endif
