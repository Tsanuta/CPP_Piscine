/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 18:25:25 by olidon            #+#    #+#             */
/*   Updated: 2021/01/05 14:31:35 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

class Awesome {

	public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }

	private:
	int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
	o << rhs.get();
	return o;
}

template< typename T >
void print( T const & x )
{
	std::cout << x << std::endl;
	return;
}

template<typename T>
void	ft_increment_array(T &array)
{
	array += 1;
}

template<typename T>
void	ft_print(T &array)
{
	std::cout << array << " ";
}

int		main(void)
{
	int			int_array[] = {10, 20, 30, 40, 50, 60};

	std::cout << "---- Test with int array        ----" << std::endl;
	iter(int_array, sizeof(int_array) / sizeof(int), ft_increment_array);
	iter(int_array, sizeof(int_array) / sizeof(int), ft_print);
	std::cout << std::endl;

	const int	int_const_array[] = {10, 20, 30, 40, 50, 60};

	std::cout << "---- Test with int const array  ----" << std::endl;
	iter(int_const_array, sizeof(int_const_array) / sizeof(int), ft_print);
	std::cout << std::endl;

	float		float_array[] = {10.5f, 20.876f, 30.548f, 40.657f, 50.54f};

	std::cout << "---- Test with float array      ----" << std::endl;
	iter(float_array, sizeof(float_array) / sizeof(float), ft_increment_array);
	iter(float_array, sizeof(float_array) / sizeof(float), ft_print);
	std::cout << std::endl;

	char		char_array[] = {'R', 96, 'k', 't', 's'};

	std::cout << "---- Test with char array       ----" << std::endl;
	iter(char_array, sizeof(char_array) / sizeof(char), ft_increment_array);
	iter(char_array, sizeof(char_array) / sizeof(char), ft_print);
	std::cout << std::endl;

	std::cout << "---- Subject Test               ----" << std::endl;
	int			tab[] = { 0, 1, 2, 3, 4 };
	Awesome		tab2[5];

	iter(tab, 5, print);
	iter(tab2, 5, print);

	return 0;
}
