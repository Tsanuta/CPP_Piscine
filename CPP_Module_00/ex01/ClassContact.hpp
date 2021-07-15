/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tsanuta <Tsanuta@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 21:11:37 by Tsanuta           #+#    #+#             */
/*   Updated: 2020/10/14 15:58:35 by Tsanuta          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSCONTACT_H
# define CLASSCONTACT_H

# include <iostream>
# include <iomanip>

class Contact {

public:
	void		Set_first_name(void);
	void		Set_last_name(void);
	void		Set_nickname(void);
	void		Set_login(void);
	void		Set_postal_adress(void);
	void		Set_email(void);
	void		Set_phone(void);
	void		Set_birth_date(void);
	void		Set_fav_meal(void);
	void		Set_underwear_color(void);
	void		Set_darkest_secret(void);

	std::string	Get_first_name(void) const;
	std::string	Get_last_name(void) const;
	std::string	Get_nickname(void) const;
	std::string	Get_login(void) const;
	std::string	Get_postal_adress(void) const;
	std::string	Get_email(void) const;
	std::string	Get_phone(void) const;
	std::string	Get_birth_date(void) const;
	std::string	Get_fav_meal(void) const;
	std::string	Get_underwear_color(void) const;
	std::string	Get_darkest_secret(void) const;
	Contact(void);
	~Contact(void);

private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	login;
	std::string	postal_adress;
	std::string	email;
	std::string	phone;
	std::string	birth_date;
	std::string	fav_meal;
	std::string	underwear_color;
	std::string	darkest_secret;
};

#endif
