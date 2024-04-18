/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 18:02:28 by bekhodad          #+#    #+#             */
/*   Updated: 2024/04/16 16:51:55 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weaponName) : _name(name), _Weapon(weaponName){}
/* ************************************************************************** */
void	HumanA::attack(){
	std::cout << _name << " attacks with their " << _Weapon.getType() << '\n';
}
