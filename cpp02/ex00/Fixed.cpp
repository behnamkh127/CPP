/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 17:51:37 by bekhodad          #+#    #+#             */
/*   Updated: 2024/04/28 14:27:25 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

static const int	_fb = 8;
/* ************************************************************************** */
Fixed::Fixed() : _fpn(0) {
	std::cout << "Default constructor called\n";
}
/* ************************************************************************** */
Fixed::Fixed(const Fixed& other){
	std::cout << "Copy constructor called\n";
	operator=(other);
}
/* ************************************************************************** */
Fixed& Fixed::operator=(const Fixed& other){
	std::cout << "Copy assignment operator called\n";
	if (this != &other)
		setRawBits(other.getRawBits());
	return *this;
}
/* ************************************************************************** */
int	Fixed::getRawBits(void)const{
	std::cout << "getRawBits member fuction called\n";
	return (_fpn);
}
/* ************************************************************************** */
void	Fixed::setRawBits(int const raw){
	_fpn = raw;
}
/* ************************************************************************** */
Fixed::~Fixed() {std::cout << "Destructor called\n";}