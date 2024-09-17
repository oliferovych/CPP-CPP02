/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:39:20 by dolifero          #+#    #+#             */
/*   Updated: 2024/09/17 14:58:35 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{

}

Point::Point(const float x_val, const float y_val) : x(x_val), y(y_val)
{
}

Point::Point(const Point &other)
{
	*this = other;
}

Point &Point::operator=(const Point &other)
{
	if(this != &other)
	{
		return (*this);
	}
	/*not possible to create the overload cuz ot he ambiguous subject*/
	return (*this);
}

Point::~Point()
{
}

bool Point::operator==(const Point &value) const
{
	if(this->x == value.x && this->y == value.y)
		return (true);
	else
		return (false);
}

Fixed Point::getX(void) const { return x;}
Fixed Point::getY(void) const { return y;}
