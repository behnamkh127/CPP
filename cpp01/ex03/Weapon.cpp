/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:12:06 by bekhodad          #+#    #+#             */
/*   Updated: 2024/04/13 17:55:36 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void	Weapon::setWeapon(std::string newType){
	_type = newType;
}
/* ************************************************************************** */
const	std::string&	Weapon::getWeapon(){
	return _type;
}
