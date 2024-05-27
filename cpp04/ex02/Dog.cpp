/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:11:17 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/27 12:54:13 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <cstdio>

Dog::Dog() : _type("Dog"), dogBrain(new Brain()) {std::cout << D << RED << "This is Dog constructor\n" << RES;}

Dog::Dog(const Dog& rhs) : Animal(rhs){
	std::cout << D << RED << "This is Dog cp constructor\n" << RES;
	*this = rhs;
}

Dog& Dog::operator=(const Dog& rhs){
	std::cout << D << RED << "this is Dog cp assignment\n" << RES;
	if (this != &rhs) {
		delete this->dogBrain;
		this->dogBrain = new Brain(*rhs.dogBrain);
		this->_type = rhs._type;
	}
	return *this;
}

void Dog::makeSound() const{
	std::cout << D << RED << "this Dog is barking\n" << RES;
}

std::string Dog::getType() const{
	return _type;
}

Brain* Dog::getBrain() const{
	return dogBrain;
}

Dog::~Dog(){
	delete dogBrain;
	std::cout << D << RED << "this is Dog destructor\n" << RES;
}