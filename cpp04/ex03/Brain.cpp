/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 11:44:40 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/16 15:27:12 by bekhodad         ###   ########.fr       */
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
		this->ideas[i] = rhs.ideas[i];
	}
	return *this;
}

void Brain::setIdea(int i, const std::string& idea){
	if(i >= 0 && i < 100)
		ideas[i] = idea;
}

std::string Brain::getIdea(int i){
	return ideas[i];
}

Brain::~Brain(){std::cout << "This is brain destructor\n";}