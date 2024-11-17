/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 23:19:55 by dolifero          #+#    #+#             */
/*   Updated: 2024/11/17 23:46:55 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	private:
		T		*_arr;
		size_t	_size;
	public:
	//Constructors
		Array();
		Array(unsigned int n);
		Array(Array const &a);
	//Operator "=" overload
		Array &operator=(Array const &a);
	//Deconstructor
		~Array();
	//Operator "[]" overload
		T &operator[](unsigned int i);
	//Method
		size_t size() const;
	//Exception
		class OutOfBounds : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

#include "Array.tpp"

#endif
