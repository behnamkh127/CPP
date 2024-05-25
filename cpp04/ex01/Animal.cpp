/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 11:39:14 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/14 13:54:50 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal"){std::cout << A << GRN << "This is Animal class constructor\n" << RES;}

Animal::Animal(const Animal& rhs){
	std::cout << A << GRN << "This is Animal class copy constructor\n" << RES;
	*this = rhs;
}

Animal& Animal::operator=(const Animal& rhs){
	this->_type = rhs._type;
	std::cout << A << GRN << "This is Animal class cp operator\n" << RES;
	return *this;
}

void Animal::makeSound() const{
	std::cout << A << GRN << "This is a sound from the all of animals\n" << RES;
}

std::string Animal::getType() const{
	return _type;
}
Animal::~Animal(){std::cout << A << GRN << "This is Animal class destructor\n" << RES;}
