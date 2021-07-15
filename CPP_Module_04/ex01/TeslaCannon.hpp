/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TeslaCannon.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 22:31:07 by olidon            #+#    #+#             */
/*   Updated: 2020/12/01 15:12:48 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESLACANNON_H
# define TESLACANNON_H

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class	TeslaCannon : public AWeapon {

public:
	TeslaCannon();
	TeslaCannon(TeslaCannon const &src);
	virtual				~TeslaCannon();

	TeslaCannon			&operator=(TeslaCannon const &rhs);
	virtual void		attack() const;

private:
};

#endif
