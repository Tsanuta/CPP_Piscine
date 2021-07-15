/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 17:56:36 by olidon            #+#    #+#             */
/*   Updated: 2021/01/06 11:14:27 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

# include <iostream>
# include <string>
# include <stack>
# include <deque>

template< typename T >
class MutantStack : public std::stack<T> {

public:
	MutantStack();
	MutantStack(MutantStack const &src);
	~MutantStack();

	MutantStack		&operator=(MutantStack const &rhs);

	typedef typename MutantStack<T>::container_type::iterator				iterator;
	typedef typename MutantStack<T>::container_type::const_iterator			const_iterator;
	typedef typename MutantStack<T>::container_type::reverse_iterator		reverse_iterator;
	typedef typename MutantStack<T>::container_type::const_reverse_iterator	const_reverse_iterator;

	iterator				begin();
	iterator				end();
	const_iterator			begin() const;
	const_iterator			end() const;
	reverse_iterator		rbegin();
	reverse_iterator		rend();
	const_reverse_iterator	rbegin() const;
	const_reverse_iterator	rend() const;

};

#endif
