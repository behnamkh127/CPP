/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 15:58:39 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/01 11:37:50 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"

class	Point{
	private:
		const Fixed _x;
		const Fixed _y;
	public:
		Point();
		Point(float const x, float const y);
		Point(const Point& other);
		Point& operator=(const Point& other);
		float get_x()const;
		float get_y()const;
		~Point();	
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
float area(Point const a, Point const b, Point const c);