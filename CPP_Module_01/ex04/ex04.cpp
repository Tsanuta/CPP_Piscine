/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 16:49:27 by olidon            #+#    #+#             */
/*   Updated: 2020/11/19 15:37:26 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*strPtr = &str;
	std::string	&strRef = str;

	std::cout << "String :" << std::endl;
	std::cout << str << std::endl;
	std::cout << "Pointeur :" << std::endl;
	std::cout << *strPtr << std::endl;
	std::cout << "Reference :" << std::endl;
	std::cout << strRef << std::endl;
}
