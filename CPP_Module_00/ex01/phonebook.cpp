/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tsanuta <Tsanuta@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 21:08:26 by Tsanuta           #+#    #+#             */
/*   Updated: 2020/10/16 15:01:44 by Tsanuta          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClassContact.hpp"

static void	ft_add_contact(Contact *cont)
{
	cont->Set_first_name();
	cont->Set_last_name();
	cont->Set_nickname();
	cont->Set_login();
	cont->Set_postal_adress();
	cont->Set_email();
	cont->Set_phone();
	cont->Set_birth_date();
	cont->Set_fav_meal();
	cont->Set_underwear_color();
	cont->Set_darkest_secret();
	std::cout << "Thank you for all the precious informations!" << std::endl;
}

static void	ft_pad_right_or_cut(std::string str)
{
		if (str.size() > 10)
			std::cout << str.substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << str;
}

static void	ft_search_contact(Contact *cont, int cont_nbr)
{
	int			i;
	std::string	buff;

	i = 0;
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	while (i < cont_nbr)
	{
		std::cout << "         " << (i + 1) << "|";
		ft_pad_right_or_cut(cont[i].Get_first_name());
		std::cout << "|";
		ft_pad_right_or_cut(cont[i].Get_last_name());
		std::cout << "|";
		ft_pad_right_or_cut(cont[i].Get_nickname());
		std::cout << std::endl;
		i++;
	}
	std::cout << "Please enter the contact index to show more informations : ";
	std::cin >> buff;
	while (buff.length() != 1 || isdigit(buff[0]) == 0 || buff[0] - '0' > cont_nbr || buff[0] - '0' < 1)
	{
		std::cout << "Wrong number, try again : ";
		std::cin >> buff;
	}
	std::cout << "Index : " << buff[0] << std::endl;
	std::cout << "First name : " << cont[buff[0] - '0' - 1].Get_first_name() << std::endl;
	std::cout << "Last name : " << cont[buff[0] - '0' - 1].Get_last_name() << std::endl;
	std::cout << "Nickname : " << cont[buff[0] - '0' - 1].Get_nickname() << std::endl;
	std::cout << "Login : " << cont[buff[0] - '0' - 1].Get_login() << std::endl;
	std::cout << "Postal adress : " << cont[buff[0] - '0' - 1].Get_postal_adress() << std::endl;
	std::cout << "Email adress : " << cont[buff[0] - '0' - 1].Get_email() << std::endl;
	std::cout << "Phone number : " << cont[buff[0] - '0' - 1].Get_phone() << std::endl;
	std::cout << "Birthday date : " << cont[buff[0] - '0' - 1].Get_birth_date() << std::endl;
	std::cout << "Favorite meal : " << cont[buff[0] - '0' - 1].Get_fav_meal() << std::endl;
	std::cout << "Underwear color : " << cont[buff[0] - '0' - 1].Get_underwear_color() << std::endl;
	std::cout << "Darkest secret : " << cont[buff[0] - '0' - 1].Get_darkest_secret() << std::endl;
	std::cout << std::endl;
}

int			main()
{
	Contact		cont[8];
	std::string	buff;
	int			loop;
	int			i;

	i = 0;
	loop = 1;

	std::cout << "Welcome to PhoneBook2000." << std::endl;
	while (loop)
	{
		std::cout << "You can use the following commands :" << std::endl;
		std::cout << "ADD    : add a new contact" << std::endl;
		std::cout << "SEARCH : search for added contacts" << std::endl;
		std::cout << "EXIT   : quit and lose your contacts" << std::endl;
		std::cin >> buff;
		if (!buff.compare("EXIT"))
			loop = 0;
		else if (!buff.compare("ADD"))
		{
			if (i < 8)
			{
				ft_add_contact(&cont[i]);
				i++;
			}
			else
				std::cout << "Your PhoneBook2000 is limited to 8 contacts, upgrade to premium version to add more." << std::endl << std::endl;
		}
		else if (!buff.compare("SEARCH"))
		{
			if (i == 0)
				std::cout << "No contacts to show, make some friends and come back!" << std::endl << std::endl;
			else
				ft_search_contact(cont, i);
		}
	}
	std::cout << "Contacts and all their secrets lost. Goodbye!" << std::endl;
	return (0);
}
