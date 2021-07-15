/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:10:19 by olidon            #+#    #+#             */
/*   Updated: 2021/01/06 11:03:54 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main()
{
	Span	sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	// Span already full exception
	try {
		sp.addNumber(18); }
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl; }

	Span	sp1005 = Span(1005);

	// Has no span exception
	try {
		std::cout << sp1005.shortestSpan() << std::endl; }
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl; }

	try {
		sp1005.addNumber(0, 500);
		sp1005.addNumber(500, 1005); }
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl; }

	std::cout << sp1005.shortestSpan() << std::endl;
	std::cout << sp1005.longestSpan() << std::endl;

	// out of range exception
	try {
		sp1005.addNumber(0, 1005); }
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl; }

	return 0;
}
