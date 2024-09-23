/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:15:19 by dolifero          #+#    #+#             */
/*   Updated: 2024/09/23 13:21:41 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool isPointOnSegment(float x1, float y1, float x2, float y2, float px, float py)
{
	float crossProduct = (py - y1) * (x2 - x1) - (px - x1) * (y2 - y1);
	if (std::abs(crossProduct) > 1e-6)
		return false;
	if (px < std::min(x1, x2) || px > std::max(x1, x2) ||
		py < std::min(y1, y2) || py > std::max(y1, y2))
		return false;
	return true;
}

bool isPointOnTriangleEdge(const Point &a, const Point &b, const Point &c, const Point &point)
{
	float ax = a.getX().toFloat();
	float ay = a.getY().toFloat();
	float bx = b.getX().toFloat();
	float by = b.getY().toFloat();
	float cx = c.getX().toFloat();
	float cy = c.getY().toFloat();
	float px = point.getX().toFloat();
	float py = point.getY().toFloat();

	return (isPointOnSegment(ax, ay, bx, by, px, py) ||
		   isPointOnSegment(bx, by, cx, cy, px, py) ||
		   isPointOnSegment(cx, cy, ax, ay, px, py));
}

float triangleArea(Point const &a, Point const &b, Point const &c)
{
	float ax = a.getX().toFloat();
	float ay = a.getY().toFloat();
	float bx = b.getX().toFloat();
	float by = b.getY().toFloat();
	float cx = c.getX().toFloat();
	float cy = c.getY().toFloat();

	float area = (ax * (by - cy) + bx * (cy - ay) + cx * (ay - by)) / 2.0f;
	return (std::abs(area));
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float mainArea;
	float sumSecondaryAreas;

	if (a == point || b == point || c == point)
		return (false);
	if (isPointOnTriangleEdge(a, b, c, point))
		return (false);
	mainArea = triangleArea(a, b, c);
	sumSecondaryAreas = triangleArea(a, b, point);
	sumSecondaryAreas = sumSecondaryAreas + triangleArea(a, point, c);
	sumSecondaryAreas = sumSecondaryAreas + triangleArea(point, b, c);
	// std::cout << "mainArea: " << mainArea << std::endl;
	// std::cout << "sumSecondaryAreas: " << sumSecondaryAreas << std::endl;
	if (mainArea == sumSecondaryAreas)
		return (true);
	else
		return (false);
}
