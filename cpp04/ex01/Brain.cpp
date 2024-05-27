/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 11:44:40 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/27 13:37:30 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {std::cout << "This is brain default constructor\n";}

Brain::Brain(const Brain& rhs){
	std::cout << "This is brain copy constructor\n";
	*this = rhs;
}

Brain& Brain::operator=(const Brain& rhs){
	std::cout << "This is brain copy assignment operator\n";
	for(int i = 0; i < 100; i++) {
		this->ideas[i] = rhs.ideas[i] + " (copied)";
	}
	return *this;
}

void Brain::setIdea(std::string type){
	for(int i = 0; i < 100; i++){
		if(i == 0){
			ideas[i] = "this is the " + type + " , first idea.";
		}
		else if (i == 1){
			ideas[i] = "this is the " + type + " , second idea.";
		}
		else if (i == 2){
			ideas[i] = "this is the " + type + " , third idea.";
		}
		else{
			char buffer[50];
			sprintf(buffer, "%d", (i+1));
			ideas[i] = "this is the " + type + " , " + buffer + "th idea.";
			}
	}
}

std::string Brain::getIdea(int i){
	return ideas[i];
}

std::string* Brain::getIdeas(){
	return ideas;
}

Brain::~Brain(){std::cout << "This is brain destructor\n";}