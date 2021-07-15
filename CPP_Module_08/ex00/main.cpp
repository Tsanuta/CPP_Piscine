/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 20:29:52 by olidon            #+#    #+#             */
/*   Updated: 2021/01/05 12:51:46 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <vector>

int		main(void)
{
	std::list<int>		lst;
	std::vector<int>	vect(5, 42);

	lst.push_back(1);
	lst.push_back(2);
	lst.push_back(3);
	lst.push_back(4);

	if (lst.end() == easyfind(lst, 1))
		std::cout << "Occurence not found" << std::endl;
	else
		std::cout << "Occurence found" << std::endl;

	if (lst.end() == easyfind(lst, 3))
		std::cout << "Occurence not found" << std::endl;
	else
		std::cout << "Occurence found" << std::endl;

	if (lst.end() == easyfind(lst, 10))
		std::cout << "Occurence not found" << std::endl;
	else
		std::cout << "Occurence found" << std::endl;

	if (vect.end() == easyfind(vect, 42))
		std::cout << "Occurence not found" << std::endl;
	else
		std::cout << "Occurence found" << std::endl;

	if (vect.end() == easyfind(vect, 6))
		std::cout << "Occurence not found" << std::endl;
	else
		std::cout << "Occurence found" << std::endl;

	return 0;
}
