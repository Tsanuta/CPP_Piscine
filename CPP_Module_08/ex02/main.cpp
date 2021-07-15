/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 17:56:18 by olidon            #+#    #+#             */
/*   Updated: 2021/01/06 12:57:46 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include "mutantstack.cpp"

int main()
{
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator	it = mstack.begin();
	MutantStack<int>::iterator	ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	//ajouter des tests
	std::cout << "More test" << std::endl;

	mstack.push(435);
	mstack.push(666);

	MutantStack<int>::reverse_iterator	rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator	rite = mstack.rend();

	++rit;
	--rit;
	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		++rit;
	}

	MutantStack<int>	mstack2;

	std::cout << "is empty: " << mstack2.empty() << std::endl;
	std::cout << "size: " << mstack2.size() << std::endl;
	mstack2.push(42);
	std::cout << "is empty: " << mstack2.empty() << std::endl;
	std::cout << "size: " << mstack2.size() << std::endl;

	return 0;
}
