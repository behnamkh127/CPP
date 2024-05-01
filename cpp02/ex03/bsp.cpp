/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:27:37 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/01 10:32:38 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
	
bool bsp(Point const a, Point const b, Point const c, Point const point) {
    // Calculate the area of the triangle ABC
    float A = area(a, b, c);

    // Calculate the area of the triangle PBC
    float A1 = area(point, b, c);

    // Calculate the area of the triangle PAC
    float A2 = area(a, point, c);

    // Calculate the area of the triangle PAB
    float A3 = area(a, b, point);

    // If the sum of A1, A2, and A3 is equal to A, the point is inside the triangle
    return (A == A1 + A2 + A3);
}

float area(Point const a, Point const b, Point const c) {
    return abs((a.get_x() *(b.get_y() - c.get_y() ) + b.get_x() *(c.get_y() - a.get_y() ) + c.get_x() *(a.get_y() - b.get_y() )) / 2.0);
}