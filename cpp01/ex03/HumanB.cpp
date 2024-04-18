/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:53:36 by bekhodad          #+#    #+#             */
/*   Updated: 2024/04/16 17:17:46 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string str) : _name(str), _Weapon(NULL) {}
/* ************************************************************************** */
void	HumanB::setWeapon(Weapon& weaponName){
	_Weapon = &weaponName;
}
/* ************************************************************************** */
void	HumanB::attack(){
	if (!_Weapon)
		std::cout << _name << " cannot attack." << '\n';
	else
		std::cout << _name << " attacks with their " << _Weapon->getType() << '\n';
}
