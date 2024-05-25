/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:11:17 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/16 15:29:56 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <cstdio>

Cat::Cat() : Animal(), _type("Cat"), catBrain(new Brain()) {std::cout << C << BLU << "This is Cat constructor\n" << RES;}

Cat::Cat(const Cat& rhs) : Animal(rhs){
	std::cout << C << BLU << "This is Cat cp constructor\n" << RES;
	*this = rhs;
}

Cat& Cat::operator=(const Cat& rhs){
	std::cout << C << BLU << "this is Cat cp assignment\n" << RES;
	delete this->catBrain;
	this->catBrain = new Brain(*rhs.catBrain);
	this->_type = rhs._type;
	return *this;
}

void Cat::makeSound() const{
	std::cout << C << BLU << "this cat is saying meauuuuu\n" << RES;
}

std::string Cat::getType() const{
	return this->_type;
}

void	Cat::setCatIdea(){
	for(int i = 0; i < 100; i++){
		if(i == 0){
			catBrain->setIdea(i, "this is the cat, first idea.");
		}
		else if (i == 1){
			catBrain->setIdea(i, "this is the cat, second idea.");
		}
		else if (i == 2){
			catBrain->setIdea(i, "this is the cat, third idea.");
		}
		else{
			char buffer[50];
			sprintf(buffer, "this is the cat, %dth idea.", (i+1));
			catBrain->setIdea(i, buffer);
		}
	}
}

std::string Cat::getCatIdeas(int i){
	return catBrain->getIdea(i);
}

Cat::~Cat(){
	delete catBrain;
	std::cout << C << BLU << "this is Cat destructor\n" << RES;
}