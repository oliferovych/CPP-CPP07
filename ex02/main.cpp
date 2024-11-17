/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 23:19:44 by dolifero          #+#    #+#             */
/*   Updated: 2024/11/17 23:58:51 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	Array<int> a(3);
	a[0] = 1;
	Array<int> b(a);
	b[1] = 2;
	Array<int> c;
	c = b;
	c[2] = 3;

	std::cout << " Array n1\nSize: " << a.size() << std::endl;
	std::cout << "Element 0 : " << a[0] << std::endl;
	std::cout << "Element 1 : " << a[1] << std::endl;
	std::cout << "Element 2 : " << a[2] << std::endl;
	std::cout << " Array n2\nSize: " << b.size() << std::endl;
	std::cout << "Element 0 : " << b[0] << std::endl;
	std::cout << "Element 1 : " << b[1] << std::endl;
	std::cout << "Element 2 : " << b[2] << std::endl;
	std::cout << " Array n3\nSize: " << c.size() << std::endl;
	std::cout << "Element 0 : " << c[0] << std::endl;
	std::cout << "Element 1 : " << c[1] << std::endl;
	std::cout << "Element 2 : " << c[2] << std::endl;
	try{
		std::cout << "Element 3 : " << c[3] << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
