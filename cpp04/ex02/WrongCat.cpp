/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 17:22:00 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/17 17:40:17 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {std::cout << "This is not a real cat constructor\n";}

WrongCat::WrongCat(const WrongCat& rhs) : WrongAnimal(){
	std::cout << "this is not a real cat cp constructor\n";
	*this = rhs;
}

WrongCat& WrongCat::operator=(const WrongCat& rhs){
	this->_type = rhs._type;
	std::cout << "this is not a real cat cp assignment\n";
	return *this;
}

void WrongCat::makeSound() const{
	std::cout << "this is a fake noise from a fake cat\n";
}
WrongCat::~WrongCat(){}