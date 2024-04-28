/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 17:51:37 by bekhodad          #+#    #+#             */
/*   Updated: 2024/04/27 18:32:48 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fpn(0) {
	std::cout << "Default constructor called\n";
}
/* ************************************************************************** */
Fixed::Fixed(const Fixed& other) : _fpn(other._fpn) {
	std::cout << "Copy constructor called\n";
}
/* ************************************************************************** */
Fixed& Fixed::operator=(const Fixed& other){
	if (this != &other)
		_fpn = other._fpn;
	std::cout << "Copy assignment called\n";
	return *this;
}
/* ************************************************************************** */
int	Fixed::getRawBits(void){
	std::cout << "getRawBits member fuction called\n";
	return (_fpn);
}
/* ************************************************************************** */
void	Fixed::setRawBits(int const raw){
	_fpn = raw;
}
/* ************************************************************************** */
Fixed::~Fixed() {std::cout << "Destructor called\n";}