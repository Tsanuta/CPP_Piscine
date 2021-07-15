/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 15:39:49 by olidon            #+#    #+#             */
/*   Updated: 2021/01/05 13:48:29 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

class Awesome
{
    public:
        Awesome( int n ) : _n( n ) {}

        // Assignation Operator mandatory for this exercise
        Awesome    &operator=( Awesome const & rhs ) {
            _n = rhs._n;
            return *this; }

        bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
        bool operator!=( Awesome const & rhs ) const { return (this->_n != rhs._n); }
        bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
        bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
        bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
        bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }

        // used for << overload operator
        int    get_n(void) const { return (this->_n); }

    private:
        int _n;
};

// to display the result of swap min and max on a class
std::ostream &    operator<<( std::ostream & os, Awesome const & rhs)
{
    os << rhs.get_n();
    return (os);
}

int		main(void)
{

	std::cout << "---- Subject test      ----" << std::endl;

	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << "---- Test with char   ----" << std::endl;

	char	e = 'd';
	char	f = 'b';

	std::cout << "e : " << e << ", f : " << f << std::endl;
	std::cout << "min( e, f ) : " << ::min(e, f) << std::endl;
	std::cout << "max( e, f ) : " << ::max(e, f) << std::endl;
	std::cout << "swap : ";
	::swap(e, f);
	std::cout << "e : " << e << ", f : " << f << std::endl;

	std::cout << "---- Test with float  ----" << std::endl;

	float	g = 42.55f;
	float	h = 55.1f;

	std::cout << "g : " << g << ", h : " << h << std::endl;
	std::cout << "min( g, h ) : " << ::min(g, h) << std::endl;
	std::cout << "max( g, h ) : " << ::max(g, h) << std::endl;
	std::cout << "swap : ";
	::swap(g, h);
	std::cout << "g : " << g << ", h : " << h << std::endl;

	std::cout << "---- Test with class  ----" << std::endl;

	Awesome	i(42);
	Awesome	j(55);

	std::cout << "i : " << i << ", j : " << j << std::endl;
	std::cout << "min( i, j ) : " << ::min(i, j) << std::endl;
	std::cout << "max( i, j ) : " << ::max(i, j) << std::endl;
	std::cout << "swap : ";
	::swap(i, j);
	std::cout << "i : " << i << ", j : " << j << std::endl;

	std::cout << "---- Test with const  ----" << std::endl;

	int const	k = 42;
	int const	l = 55;

	std::cout << "k : " << k << ", l : " << l << std::endl;
	std::cout << "min( k, l ) : " << min(k, l) << std::endl;
	std::cout << "max( k, l ) : " << max(k, l) << std::endl;

	return 0;
}
