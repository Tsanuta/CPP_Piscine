/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 21:11:06 by olidon            #+#    #+#             */
/*   Updated: 2020/11/18 20:06:55 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

# include <iostream>
# include <string>
# include <stdexcept>

template<typename T>
class	Array {

public:

	Array(void);
	Array(unsigned int n);
	Array(Array<T> const &src);
	~Array(void);

	Array<T>		&operator=(Array<T> const &rhs);
	T				&operator[](int i);
	T const			&operator[](int i) const;

	unsigned int	size(void) const;

private:
	T				*_array;
	unsigned int	_size;

};

template<typename T>
std::ostream		&operator<<(std::ostream &o, Array<T> const &i);

template<typename T>
Array<T>::Array(void)
{
	this->_size = 0;
	this->_array = new T[0];
	return ;
}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n)
{
	this->_array = new T[n];
	for (size_t i = 0; i < static_cast<unsigned long>(n); ++i)
		this->_array[i] = T();
	return ;
}

template<typename T>
Array<T>::Array(Array<T> const &src)
{
	this->_size = src._size;
	this->_array = new T[src._size];
	for (size_t i = 0; i < src._size; ++i)
		this->_array[i] = src._array[i];
	return ;
}

template<typename T>
Array<T>::~Array(void)
{
	delete[] this->_array;
	return ;
}

template<typename T>
Array<T>		&Array<T>::operator=(Array<T> const &rhs)
{
	this->_size = rhs._size;
	delete[] this->_array;
	this->_array = new T[this->_size];
	for (size_t i = 0; i < this->_size; ++i)
		this->_array[i] = rhs._array[i];
	return *this;
}

template<typename T>
T				&Array<T>::operator[](int i)
{
	if (this->_size != 0 && static_cast<long>(i) < static_cast<long>(this->_size) && i >= 0)
		return this->_array[i];
	else
		throw std::out_of_range("Out of range");

}

template<typename T>
T const			&Array<T>::operator[](int i) const
{
	if (this->_size != 0 && static_cast<long>(i) < static_cast<long>(this->_size) && i >= 0)
		return this->_array[i];
	else
		throw std::out_of_range ("Out of range");
}

template<typename T>
unsigned int	Array<T>::size(void) const
{
	return this->_size;
}

template<typename T>
std::ostream		&operator<<(std::ostream &o, Array<T> const &i)
{
	if (i.size() != 0)
		for (int j = 0; static_cast<long>(j) < static_cast<long>(i.size()); ++j)
			o << i[j] << " ";
	else
		o << "Empty Array";
	return o;
}

#endif
