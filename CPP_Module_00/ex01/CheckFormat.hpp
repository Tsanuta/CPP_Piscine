/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CheckFormat.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tsanuta <Tsanuta@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 14:48:05 by Tsanuta           #+#    #+#             */
/*   Updated: 2020/10/14 15:17:33 by Tsanuta          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKFORMAT_H
# define CHECKFORMAT_H

# include <iostream>

bool	ft_is_alpha(std::string buff);
bool	ft_is_num(std::string buff);
bool	ft_is_email(std::string buff);
bool	ft_is_birthdate(std::string buff);

#endif
