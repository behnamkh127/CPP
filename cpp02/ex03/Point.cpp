/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 15:58:36 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/01 19:01:23 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0){}

Point::Point(float const x, float const y) : _x(x), _y(y){}

Point::Point(const Point& other) : _x(other._x), _y(other._y){}

Point&	Point::operator=(const Point& other){
	const_cast <Fixed&> (_x) = other._x;
	const_cast <Fixed&> (_y) = other._y;
	return (*this);
}

float Point::get_x()const{
	return _x.toFloat();
}

float Point::get_y()const{
	return _y.toFloat();
}

Point::~Point() {std::cout << "this point removed\n";}
