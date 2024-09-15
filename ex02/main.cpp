/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 17:52:21 by dolifero          #+#    #+#             */
/*   Updated: 2024/09/15 02:07:22 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;

	return 0;
}

// int main(void)
// {
// 	Fixed a;
// 	Fixed b(10);
// 	Fixed c(42.42f);
// 	Fixed d(b);

// 	a = Fixed(1234.4321f);

// 	std::cout << "a is " << a << std::endl;
// 	std::cout << "b is " << b << std::endl;
// 	std::cout << "c is " << c << std::endl;
// 	std::cout << "d is " << d << std::endl;
// 	std::cout << std::endl;
// 	std::cout << "Arithmetics:" << std::endl;
// 	a = a + b;
// 	b = b * c;
// 	c = c / d;
// 	d = d - a;
// 	std::cout << "a is " << a << std::endl;
// 	std::cout << "b is " << b << std::endl;
// 	std::cout << "c is " << c << std::endl;
// 	std::cout << "d is " << d << std::endl;
// 	std::cout << std::endl;
// 	std::cout << "Comparison:" << std::endl;
// 	a = a > b;
// 	b = b < c;
// 	c = c == d;
// 	d = d != a;
// 	std::cout << "a is " << a << std::endl;
// 	std::cout << "b is " << b << std::endl;
// 	std::cout << "c is " << c << std::endl;
// 	std::cout << "d is " << d << std::endl;
// 	std::cout << std::endl;
// 	std::cout << "Incrementing/decrementing:" << std::endl;
// 	a = 1;
// 	b = 1;
// 	c = 1;
// 	d = 1;
// 	a--;
// 	b++;
// 	++c;
// 	--d;
// 	std::cout << "a is " << a << std::endl;
// 	std::cout << "b is " << b << std::endl;
// 	std::cout << "c is " << c << std::endl;
// 	std::cout << "d is " << d << std::endl;
// 	std::cout << std::endl;
// 	std::cout << "Min & max" << std::endl;
// 	std::cout << "a is " << a << std::endl;
// 	std::cout << "b is " << b << std::endl;
// 	std::cout << "c is " << c << std::endl;
// 	std::cout << "d is " << d << std::endl;
// 	std::cout << "max a & b:" << a.max(a, b) << std::endl;
// 	std::cout << "min b & c:" << b.min(b, c) << std::endl;
// 	std::cout << "max c & d:" << c.max(c, d) << std::endl;
// 	std::cout << "min d & a:" << d.min(d, a) << std::endl;
// 	std::cout << std::endl;
// 	return 0;
// }
