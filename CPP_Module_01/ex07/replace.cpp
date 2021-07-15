/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 13:23:22 by olidon            #+#    #+#             */
/*   Updated: 2020/11/19 15:38:19 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

static std::string ft_replace(std::string str, const std::string &from, const std::string &to)
{
	size_t start_pos = 0;

	while((start_pos = str.find(from, start_pos)) != std::string::npos)
	{
		str.replace(start_pos, from.length(), to);
		start_pos += to.length();
	}
	return str;
}

int		main(int argc, char **argv)
{
	std::ifstream		ifs;
	std::stringstream	filename;
	std::stringstream	buffer;
	std::string			replaced;

	if (argc != 4 || !argv[1][0] || !argv[2][0] || !argv[3][0])
	{
		std::cout << "Please indicate a filename and two non empty string to replace" << std::endl;
		return (0);
	}
	ifs.open(argv[1]);
	if (!ifs)
	{
		std::cout << "Can't open file" << std::endl;
		return (0);
	}
	filename << argv[1] << ".replace";

	std::ofstream	ofs;

	ofs.open(filename.str().c_str());
	if (ifs)
	{
		buffer << ifs.rdbuf();
		ifs.close();
	}
	replaced = ft_replace(buffer.str(), argv[2], argv[3]);
	ofs << replaced;
	ofs.close();
	return (0);
}
