/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 16:27:51 by olidon            #+#    #+#             */
/*   Updated: 2020/12/14 15:10:19 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"
#include <iomanip>

bool	ft_isscienceformat(std::string arg)
{
	if (arg.compare("+inf") == 0 || arg.compare("-inf") == 0
			|| arg.compare("nan") == 0 || arg.compare("nanf") == 0)
	{
		std::cout << "char : impossible" << std::endl << "int : impossible" << std::endl;
		if (arg.compare("+inf") == 0)
			std::cout << "float : +inf" << std::endl << "double : +inf" << std::endl;
		if (arg.compare("-inf") == 0)
			std::cout << "float : -inf" << std::endl << "double : -inf" << std::endl;
		if (arg.compare("nan") == 0 || arg.compare("nanf") == 0)
			std::cout << "float : nanf" << std::endl << "double : nan" << std::endl;
		return true;
	}
	return false;
}

bool	ft_isnumformat(char *arg)
{
	int		i;

	i = 0;
	if (!arg[i])
		return false;
	if (arg[i] == '-' || arg[i] == '+')
		i++;
	if (!arg[i] || arg[i] == 'f')
		return false;
	while(arg[i] >= '0' && arg[i] <= '9')
		i++;
	if (!arg[i] || (arg[i] == 'f' && !arg[i + 1]))
		return true;
	if (arg[i] == '.')
		i++;
	if (!arg[i])
		return false;
	while(arg[i] >= '0' && arg[i] <= '9')
		i++;
	if (!arg[i] || (arg[i] == 'f' && !arg[i + 1]))
		return true;
	if (arg[i] == 'E' || arg[i] == 'e')
		i++;
	if (!arg[i])
		return false;
	if (arg[i] == '-' || arg[i] == '+')
		i++;
	if (!arg[i] || arg[i] == 'f')
		return false;
	while (arg[i] >= '0' && arg[i] <= '9')
		i++;
	if (!arg[i] || (arg[i] == 'f' && !arg[i + 1]))
		return true;
	return false;
}

int		main(int argc, char **argv)
{
	std::string			number;
	std::ostringstream	convert;
	int					nbr;

	if (argc != 2)
	{
		std::cout << "Too many arguments" << std::endl;
		return 1;
	}
	// check le format de argv[1] peut etre soit un displayable charactere unique soit un nombre soit un nombre a virgule soit un nombre a virgule suivi de f soit nan soit +inf soit -inf
	// AJOUTER CONDITION SI CHAR ENTRE 0 et 9 TRAITER COMME INT && (((argv[1][0] >= CHAR_MIN && argv[1][0] < '0') || (argv[1][0] > '9' && argv[1][0] <= CHAR_MAX)))
	if (argv[1][0] && (((argv[1][0] >= CHAR_MIN && argv[1][0] < '0') || (argv[1][0] > '9' && argv[1][0] <= CHAR_MAX))) && !argv[1][1])
	{
		nbr = argv[1][0];
		convert << nbr;
		number = convert.str();
	}
	else if (ft_isscienceformat(std::string(argv[1])))
		return 0;
	else if (ft_isnumformat(argv[1]))
	{
		number = std::string(argv[1]);
		if (*number.rbegin() == 'f')
			number = number.erase(number.size() - 1);
	}
	else
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : impossible" << std::endl;
		std::cout << "double : impossible" << std::endl;
		return 0;
	}

	ScalarConversion	value(number);
	char				a;

	std::cout << "char : ";
	try {
		a = value.convertValueChar();
		std::cout << "'" << a << "'" << std::endl; }
	catch(const std::exception &e) {
		std::cout << e.what() << std::endl; }
	std::cout << "int : ";
	try {
		std::cout << value.convertValueInt() << std::endl; }
	catch(const std::exception &e) {
		std::cout << e.what() << std::endl; }
	std::cout << "float : ";
	try {
		std::cout << std::setprecision(1) << std::fixed << value.convertValueFloat() << "f" << std::endl; }
	catch(const std::exception &e) {
		std::cout << e.what() << std::endl; }
	std::cout << "double : ";
	try {
		std::cout << std::setprecision(1) << std::fixed << value.convertValueDouble() << std::endl; }
	catch(const std::exception &e) {
		std::cout << e.what() << std::endl; }
	return 0;
}
