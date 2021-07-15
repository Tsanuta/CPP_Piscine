/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 22:31:07 by olidon            #+#    #+#             */
/*   Updated: 2020/12/01 15:12:48 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_H
# define PLASMARIFLE_H

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class	PlasmaRifle : public AWeapon {

public:
	PlasmaRifle();
	PlasmaRifle(PlasmaRifle const &src);
	virtual 		~PlasmaRifle();

	PlasmaRifle		&operator=(PlasmaRifle const &rhs);
	virtual void	attack() const;

private:

};

#endif
