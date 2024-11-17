/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 23:19:44 by dolifero          #+#    #+#             */
/*   Updated: 2024/11/18 00:02:36 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	std::cout << "Int Array\n\n" << std::endl;
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

	std::cout << "\nString Array\n\n" << std::endl;
	Array<std::string> sa(3);
	sa[0] = "Hello";
	Array<std::string> sb(sa);
	sb[1] = "World";
	Array<std::string> sc;
	sc = sb;
	sc[2] = "!";

	std::cout << " Array n1\nSize: " << sa.size() << std::endl;
	std::cout << "Element 0 : " << sa[0] << std::endl;
	std::cout << "Element 1 : " << sa[1] << std::endl;
	std::cout << "Element 2 : " << sa[2] << std::endl;
	std::cout << " Array n2\nSize: " << sb.size() << std::endl;
	std::cout << "Element 0 : " << sb[0] << std::endl;
	std::cout << "Element 1 : " << sb[1] << std::endl;
	std::cout << "Element 2 : " << sb[2] << std::endl;
	std::cout << " Array n3\nSize: " << sc.size() << std::endl;
	std::cout << "Element 0 : " << sc[0] << std::endl;
	std::cout << "Element 1 : " << sc[1] << std::endl;
	std::cout << "Element 2 : " << sc[2] << std::endl;
	try{
		std::cout << "Element 3 : " << sc[3] << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
