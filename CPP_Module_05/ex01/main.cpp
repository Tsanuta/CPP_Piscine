/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 16:48:34 by olidon            #+#    #+#             */
/*   Updated: 2020/12/11 13:40:28 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main()
{
	// No exception
	try
	{
		Form *poetry = new Form("Poetry", 150, 5);
		std::cout << *poetry << std::endl;
		delete poetry;
	}
	catch(const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	// Grade too high exception
	try
	{
		Form *poetry = new Form("Poetry", 0, 5);
		std::cout << *poetry << std::endl;
		delete poetry;
	}
	catch(const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	// Grade too low exception
	try
	{
		Form *poetry = new Form("Poetry", 151, 5);
		std::cout << *poetry << std::endl;
		delete poetry;
	}
	catch(const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	// Grade too high exception
	try
	{
		Form *poetry = new Form("Poetry", 5, 0);
		std::cout << *poetry << std::endl;
		delete poetry;
	}
	catch(const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	// No exception
	try
	{
		Form *poetry = new Form("Poetry", 5, 10);
		std::cout << *poetry << std::endl;
		delete poetry;
	}
	catch(const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	// Grade too low exception
	try
	{
		Form *poetry = new Form("Poetry", 5, 151);
		std::cout << *poetry << std::endl;
		delete poetry;
	}
	catch(const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	// No exception
	Form *poetry2 = new Form("Poetry2", 10, 5);
	Form *poetry3 = new Form("Poetry3", 10, 5);
	Bureaucrat	*vog = new Bureaucrat("Vogon2", 10);
	try
	{
		std::cout << *poetry2 << std::endl;
		std::cout << *poetry3 << std::endl;
		std::cout << *vog << std::endl;
		vog->signForm(poetry2);
		std::cout << *poetry2 << std::endl;
		vog->decrementGrade();
		std::cout << *vog << std::endl;
		// Grade too low exception after decrement
		vog->signForm(poetry2);
	}
	catch(const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	// Grade too low exception
	try
	{
		vog->signForm(poetry3);
	}
	catch(const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	delete poetry2;
	delete poetry3;
	delete vog;
	return 0;
}
