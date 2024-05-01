/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 17:02:39 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/01 11:29:23 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fb = 8;
/* ************************************************************************** */

Fixed::Fixed() : _fpn(0) {}//std::cout << "Default constractor called\n";}
/* ************************************************************************** */

Fixed::Fixed(int const num) : _fpn(num << _fb){}//std::cout << "Int constractor called\n";}
/* ************************************************************************** */

Fixed::Fixed(float const num) : _fpn(roundf(num * (1 << _fb))) {}//std::cout << "Float constractor called\n";}
/* ************************************************************************** */
Fixed::Fixed(const Fixed& other){
	//std::cout << "Copy constractor called\n";
	operator=(other);
}
/* ************************************************************************** */

Fixed& Fixed::operator=(const Fixed& other){
	//std::cout << "Copy assignment operator called\n";
	if (this != &other) {
		_fpn = other._fpn;
	}
	return *this;
}
/* ************************************************************************** */

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
	os << fixed.toFloat();
	return os;
}
/* ************************************************************************** */

float Fixed::toFloat(void) const {
	return static_cast<float>(_fpn) / (1 << _fb);
}
/* ************************************************************************** */

bool	Fixed::operator!=(const Fixed& other)const{
	return this->toFloat() != other.toFloat();
}
/* ************************************************************************** */

bool	Fixed::operator>(const Fixed& other)const{
	return this->toFloat() > other.toFloat();
}
/* ************************************************************************** */

bool	Fixed::operator==(const Fixed& other)const{
	return this->toFloat() == other.toFloat();
}
/* ************************************************************************** */

bool	Fixed::operator>=(const Fixed& other)const{
	return this->toFloat() >= other.toFloat();
}
/* ************************************************************************** */

bool	Fixed::operator<=(const Fixed& other)const{
	return this->toFloat() <= other.toFloat();
}
/* ************************************************************************** */

bool	Fixed::operator<(const Fixed& other)const{
	return this->toFloat() < other.toFloat();
}
/* ************************************************************************** */

Fixed	Fixed::operator+(const Fixed& other)const{
	return this->toFloat() + other.toFloat();
}
/* ************************************************************************** */

Fixed	Fixed::operator-(const Fixed& other)const{
	return this->toFloat() - other.toFloat();
}
/* ************************************************************************** */

Fixed	Fixed::operator*(const Fixed& other)const{
	return this->toFloat() * other.toFloat();
}
/* ************************************************************************** */

Fixed	Fixed::operator/(const Fixed& other)const{
	return this->toFloat() / other.toFloat();
}
/* ************************************************************************** */

Fixed&	Fixed::operator++(){
	_fpn++;
	return *this;
}
/* ************************************************************************** */

Fixed&	Fixed::operator--(){
	_fpn--;
	return *this;
}
/* ************************************************************************** */

Fixed 	Fixed::operator++(int){
	Fixed temp(*this);
	_fpn++;
	return temp;
}
/* ************************************************************************** */

Fixed 	Fixed::operator--(int){
	Fixed temp(*this);
	_fpn--;
	return temp;
}
/* ************************************************************************** */

const Fixed& Fixed::min(const Fixed& a, const Fixed& b){
	if(a._fpn < b._fpn)
		return a;
	else
		return b;
}
/* ************************************************************************** */

Fixed& Fixed::min(Fixed& a, Fixed& b){
	if(a._fpn < b._fpn)
		return a;
	else
		return b;
}
/* ************************************************************************** */

const Fixed& Fixed::max(const Fixed& a, const Fixed& b){
	if(a._fpn > b._fpn)
		return a;
	else
		return b;
}
/* ************************************************************************** */

Fixed& Fixed::max(Fixed& a, Fixed& b){
	if(a._fpn < b._fpn)
		return a;
	else
		return b;
}
/* ************************************************************************** */

int Fixed::toInt(void) const {
	return _fpn >> _fb;
}

Fixed::~Fixed() {}//std::cout << "Destructor called\n";}