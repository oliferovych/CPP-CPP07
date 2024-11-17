/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 23:27:49 by dolifero          #+#    #+#             */
/*   Updated: 2024/11/18 00:07:12 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

#include "Array.hpp"


//Constructors
template <typename T>
Array<T>::Array() : _arr(NULL), _size(0)
{
	std::cout << "Standard constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n) : _arr(new T[n]), _size(n)
{
	std::cout << "Constructor with size called" << std::endl;
	for (unsigned int i = 0; i < n; ++i)
		_arr[i] = T();
}

template <typename T>
Array<T>::Array(Array<T> const &other)
{
	if(this != &other)
	{
		_size = other._size;
		_arr = new T[_size];
		for (size_t i = 0; i < _size; i++)
			_arr[i] = other._arr[i];
	}
	std::cout << "Copy constructor called" << std::endl;
}

//Operator "=" overload
template <typename T>
Array<T> &Array<T>::operator=(Array<T> const &other)
{
	if(this != &other)
	{
		if (_arr)
			delete[] _arr;
		_size = other._size;
		_arr = new T[_size];
		for (size_t i = 0; i < _size; i++)
			_arr[i] = other._arr[i];
	}
	std::cout << "Assignation operator called" << std::endl;
	return *this;
}

//Deconstructor
template <typename T>
Array<T>::~Array()
{
	if (_arr)
		delete[] _arr;
	std::cout << "Destructor called, array of size " << _size << " destructed" << std::endl;
}

//Operator "[]" overload
template <typename T>
T &Array<T>::operator[](unsigned int i)
{
	if (i >= _size)
		throw OutOfBounds();
	return _arr[i];
}

//Method
template <typename T>
size_t Array<T>::size() const
{
	return _size;
}

//Exception
template <typename T>
const char* Array<T>::OutOfBounds::what() const throw()
{
	return "Index is out of bounds";
}

#endif
