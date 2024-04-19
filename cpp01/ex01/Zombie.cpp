/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:07:00 by bekhodad          #+#    #+#             */
/*   Updated: 2024/04/13 12:52:56 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
	std::cout << _name << "This zombie created.\n";
}
//**********************************************************************//
Zombie::~Zombie(){
	std::cout << "This zombie destroyed\n";
}
//**********************************************************************//
void	Zombie::announce(void){
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}
//**********************************************************************//
void	Zombie::setName(std::string name){
	_name = name;
}