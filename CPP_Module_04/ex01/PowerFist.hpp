/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 22:39:08 by olidon            #+#    #+#             */
/*   Updated: 2020/12/01 15:12:48 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_H
# define POWERFIST_H

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class	PowerFist : public AWeapon {

public:
	PowerFist();
	PowerFist(PowerFist const &src);
	virtual 		~PowerFist();

	PowerFist		&operator=(PowerFist const &rhs);
	virtual void	attack() const;

private:

};

#endif
