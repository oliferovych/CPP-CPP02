/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 17:52:21 by dolifero          #+#    #+#             */
/*   Updated: 2024/09/17 15:19:21 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

int main(void)
{
	Point a(0.0f, 0.0f);
	Point b(10.0f, 0.0f);
	Point c(0.0f, 10.0f);

	Point p[4] = {Point(2.0f, 2.0f), Point(12.0f, 12.0f), Point(0.0f, 0.0f), Point(5.0f, 0.0f)};

	std::cout << "1: Point in the triangle" << std::endl;
	std::cout << "2: Point outside of the triangle" << std::endl;
	std::cout << "3: Point equal to the vertex of triangle" << std::endl;
	std::cout << "4: Point on the edge of the triangle" << std::endl;
	std::cout << std::endl;

	for(int i = 0; i < 4; i++)
	{
		std::cout << i + 1 << ": " << std::endl;
		std::cout << "a: " << a.getX()<< "," << a.getY() << std::endl;
		std::cout << "b: " << b.getX()<< "," << b.getY() << std::endl;
		std::cout << "c: " << c.getX()<< "," << c.getY() << std::endl;
		std::cout << "point: " << p[i].getX()<< "," << p[i].getY() << std::endl;
		bool result = bsp(a, b, c, p[i]);
		std::cout << "point is in triangle: " << result << std::endl;
		std::cout << std::endl;
	}
}

// int main(void)
// {
// 	Point a(0.0f, 0.0f);
// 	Point b(10.0f, 0.0f);
// 	Point c(0.0f, 10.0f);

// 	//Point in the triangle
// 	Point p(2.0f, 2.0f);
// 	std::cout << "a: " << a.getX()<< "," << a.getY() << std::endl;
// 	std::cout << "b: " << b.getX()<< "," << b.getY() << std::endl;
// 	std::cout << "c: " << c.getX()<< "," << c.getY() << std::endl;
// 	std::cout << std::endl;
// 	std::cout << "point p: " << p.getX()<< "," << p.getY() << std::endl;
// 	std::cout << std::endl;
// 	bool result = bsp(a, b, c, p);
// 	std::cout << std::endl;
// 	std::cout << "point is in triangle: " << result << std::endl;
// 	std::cout << std::endl;
// 	//Point outside of the triangle
// 	Point o(12.0f, 12.0f);
// 	std::cout << "a: " << a.getX()<< "," << a.getY() << std::endl;
// 	std::cout << "b: " << b.getX()<< "," << b.getY() << std::endl;
// 	std::cout << "c: " << c.getX()<< "," << c.getY() << std::endl;
// 	std::cout << std::endl;
// 	std::cout << "point o: " << o.getX()<< "," << o.getY() << std::endl;
// 	std::cout << std::endl;
// 	bool result = bsp(a, b, c, o);
// 	std::cout << std::endl;
// 	std::cout << "point is in triangle: " << result << std::endl;
// 	std::cout << std::endl;
// 	//Point equal to the vertex of triangle
// 	Point v(0.0f, 0.0f);
// 	std::cout << "a: " << a.getX()<< "," << a.getY() << std::endl;
// 	std::cout << "b: " << b.getX()<< "," << b.getY() << std::endl;
// 	std::cout << "c: " << c.getX()<< "," << c.getY() << std::endl;
// 	std::cout << std::endl;
// 	std::cout << "point v: " << v.getX()<< "," << v.getY() << std::endl;
// 	std::cout << std::endl;
// 	bool result = bsp(a, b, c, v);
// 	std::cout << std::endl;
// 	std::cout << "point is in triangle: " << result << std::endl;
// 	std::cout << std::endl;
// 	//Point on the edge of the triangle
// 	Point e(5.0f, 0.0f);
// 	std::cout << "a: " << a.getX()<< "," << a.getY() << std::endl;
// 	std::cout << "b: " << b.getX()<< "," << b.getY() << std::endl;
// 	std::cout << "c: " << c.getX()<< "," << c.getY() << std::endl;
// 	std::cout << std::endl;
// 	std::cout << "point e: " << e.getX()<< "," << e.getY() << std::endl;
// 	std::cout << std::endl;
// 	bool result = bsp(a, b, c, e);
// 	std::cout << std::endl;
// 	std::cout << "point is in triangle: " << result << std::endl;
// 	std::cout << std::endl;
// }
