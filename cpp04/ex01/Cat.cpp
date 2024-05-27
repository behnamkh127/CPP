/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:11:17 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/27 14:40:29 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal(), _type("Cat"), catBrain(new Brain()) {std::cout << C << BLU << "This is Cat constructor\n" << RES;}

Cat::Cat(const Cat& rhs) : Animal(rhs){
	std::cout << C << BLU << "This is Cat cp constructor\n" << RES;
	*this = rhs;
}

Cat& Cat::operator=(const Cat& rhs){
	std::cout << C << BLU << "this is Cat cp assignment\n" << RES;
	if (this != &rhs) {
		this->catBrain = new Brain(*rhs.catBrain);
		this->_type = rhs._type;
	}
	return *this;
}

void Cat::makeSound() const{
	std::cout << C << BLU << "this cat is saying meauuuuu\n" << RES;
}

std::string Cat::getType() const{
	return this->_type;
}

Brain* Cat::getBrain() const{
	return this->catBrain;
}

Cat::~Cat(){
	delete catBrain;
	std::cout << C << BLU << "this is Cat destructor\n" << RES;
}