/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:37:21 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/21 12:13:57 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(): _type("") {}//std::cout << "this is AMateria default constructor\n";}

AMateria::AMateria(std::string const & type) : _type(type){}

AMateria::AMateria(const AMateria& rhs): _type(rhs._type){}

AMateria& AMateria::operator=(const AMateria& rhs){
	this->_type = rhs._type;
	return *this;
}

AMateria::~AMateria(){};