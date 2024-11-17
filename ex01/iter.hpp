/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 19:11:39 by dolifero          #+#    #+#             */
/*   Updated: 2024/11/15 19:22:58 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void iter(T *arr, size_t length, void (*f)(T const &))
{
	for(size_t i = 0; i < length; i++)
		f(arr[i]);
}

template <typename T>
void print(T const &i)
{
	std::cout << i << std::endl;
}

#endif
