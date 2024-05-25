/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:11:17 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/16 15:33:11 by bekhodad         ###   ########.fr       */
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
	delete this->dogBrain;
	this->dogBrain = new Brain(*rhs.dogBrain);
	this->_type = rhs._type;
	return *this;
}

void Dog::makeSound() const{
	std::cout << D << RED << "this Dog is barking\n" << RES;
}

std::string Dog::getType() const{
	return _type;
}

void	Dog::setDogIdea(){
	for(int i = 0; i < 100; i++){
		if(i == 0){
			dogBrain->setIdea(i, "this is the dog, first idea.");
		}
		else if (i == 1){
			dogBrain->setIdea(i, "this is the dog, second idea.");
		}
		else if (i == 2){
			dogBrain->setIdea(i, "this is the dog, third idea.");
		}
		else{
			char buffer[50];
			sprintf(buffer, "this is the dog, %dth idea.", (i+1));
			dogBrain->setIdea(i, buffer);
		}
	}
}

std::string Dog::getDogIdeas(int i){
	return dogBrain->getIdea(i);
}

Dog::~Dog(){
	delete dogBrain;
	std::cout << D << RED << "this is Dog destructor\n" << RES;
}