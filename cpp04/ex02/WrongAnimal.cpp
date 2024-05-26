/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:12:32 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/17 16:51:15 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){std::cout << "This isn't a real animal constructor\n";}

WrongAnimal::WrongAnimal(const WrongAnimal& rhs){
	std::cout << "This isn't real animal cp constructor\n";
	*this = rhs;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs){
	this->_type = rhs._type;
	std::cout << "this is not a real animal cp assignment\n";
	return *this;
}

void WrongAnimal::makeSound() const{
	std::cout << "This fake animal is making a fake noise\n";
}
WrongAnimal::~WrongAnimal(){std::cout << "This is not a real animal destructor\n";}