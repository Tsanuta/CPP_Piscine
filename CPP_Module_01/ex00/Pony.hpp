/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 23:49:22 by olidon            #+#    #+#             */
/*   Updated: 2020/11/19 15:36:33 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H

# include <iostream>
# include <iomanip>
# include <ctime>
# include <cstdlib>

class Pony {

public:
	void		run();
	void		faster();
	void		print_pony_details() const;
	Pony(void);
	~Pony(void);

private:
	std::string	Eye_color;
	std::string	Pony_color;
	int			Age;
	int			Speed;
};

#endif
