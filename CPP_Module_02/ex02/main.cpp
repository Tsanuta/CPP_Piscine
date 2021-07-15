/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 16:12:40 by olidon            #+#    #+#             */
/*   Updated: 2020/11/19 21:14:36 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

int		main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << "Pre Increment" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << "Post Increment" << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << "Max" << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << "Min" << std::endl;
	std::cout << Fixed::min(a, b) << std::endl;

	std::cout << "Pre Decrement" << std::endl;
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << "Post Decrement" << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;

	Fixed c(5.05f);
	Fixed d(2);

	std::cout << "Mult" << std::endl;
	std::cout << c * d << std::endl;
	std::cout << "Div" << std::endl;
	std::cout << c / d << std::endl;
	std::cout << "Plus" << std::endl;
	std::cout << c + d << std::endl;
	std::cout << "Minus" << std::endl;
	std::cout << c - d << std::endl;
	std::cout << "c > d" << std::endl;
	if (c > d)
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;
	std::cout << "c < d" << std::endl;
	if (c < d)
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;
	std::cout << "c >= d" << std::endl;
	if (c >= d)
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;
	std::cout << "c <= d" << std::endl;
	if (c <= d)
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;
	std::cout << "c == d" << std::endl;
	if (c == d)
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;
	std::cout << "c != d" << std::endl;
	if (c != d)
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;
	return 0;
}
