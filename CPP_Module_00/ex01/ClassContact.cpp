/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 21:18:37 by Tsanuta           #+#    #+#             */
/*   Updated: 2020/10/20 16:25:52 by user42           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClassContact.hpp"
#include "CheckFormat.hpp"

Contact::Contact(void)
{
	return;
}

Contact::~Contact(void)
{
	// std::cout << "Destroyed" << std::endl;
	return;
}

void	Contact::Set_first_name(void)
{
	std::string	buff;

	std::cout << "Please enter your first name : ";
	std::cin.ignore();
	std::getline(std::cin, buff);
	while (ft_is_alpha(buff))
	{
		std::cout << "Try again : ";
		std::getline(std::cin, buff);
	}
	first_name = buff;
	return ;
}

void	Contact::Set_last_name(void)
{
	std::string	buff;

	std::cout << "Please enter your last name : ";
	std::getline(std::cin, buff);
	while (ft_is_alpha(buff))
	{
		std::cout << "Try again : ";
		std::getline(std::cin, buff);
	}
	last_name = buff;
	return ;
}

void	Contact::Set_nickname(void)
{
	std::cout << "Please enter your nickname : ";
	std::getline(std::cin, nickname);
	return ;
}

void	Contact::Set_login(void)
{
	std::cout << "Please enter your login : ";
	std::getline(std::cin, login);
	return ;
}

void	Contact::Set_postal_adress(void)
{
	std::cout << "Please enter your postal adress : ";
	std::getline(std::cin, postal_adress);
	return ;
}

void	Contact::Set_email(void)
{
	std::string	buff;

	std::cout << "Please enter your email adress : ";
	std::getline(std::cin, buff);
	while (ft_is_email(buff))
	{
		std::cout << "Try again : ";
		std::getline(std::cin, buff);
	}
	email = buff;
	return ;
}

void	Contact::Set_phone(void)
{
	std::string	buff;

	std::cout << "Please enter your phone number : ";
	std::getline(std::cin, buff);
	while (ft_is_num(buff))
	{
		std::cout << "Try again : ";
		std::getline(std::cin, buff);
	}
	phone = buff;
	return ;
}

void	Contact::Set_birth_date(void)
{
	std::string	buff;

	std::cout << "Please enter your birthday date JJMMYYYY : ";
	std::getline(std::cin, buff);
	while (ft_is_birthdate(buff))
	{
		std::cout << "Try again : ";
		std::getline(std::cin, buff);
	}
	birth_date = buff;
	return ;
}

void	Contact::Set_fav_meal(void)
{
	std::cout << "Please enter your favourite meal : ";
	std::getline(std::cin, fav_meal);
	return ;
}

void	Contact::Set_underwear_color(void)
{
	std::cout << "Please enter your underwear color : ";
	std::getline(std::cin, underwear_color);
	return ;
}

void	Contact::Set_darkest_secret(void)
{
	std::cout << "Please enter your darkest secret : ";
	std::getline(std::cin, darkest_secret);
	return ;
}

std::string	Contact::Get_first_name(void) const
{
	return (this->first_name);
}

std::string	Contact::Get_last_name(void) const
{
	return (this->last_name);
}

std::string	Contact::Get_nickname(void) const
{
	return (this->nickname);
}

std::string	Contact::Get_login(void) const
{
	return (this->login);
}

std::string	Contact::Get_postal_adress(void) const
{
	return (this->postal_adress);
}

std::string	Contact::Get_email(void) const
{
	return (this->email);
}

std::string	Contact::Get_phone(void) const
{
	return (this->phone);
}

std::string	Contact::Get_birth_date(void) const
{
	return (this->birth_date);
}

std::string	Contact::Get_fav_meal(void) const
{
	return (this->fav_meal);
}

std::string	Contact::Get_underwear_color(void) const
{
	return (this->underwear_color);
}

std::string	Contact::Get_darkest_secret(void) const
{
	return (this->darkest_secret);
}
