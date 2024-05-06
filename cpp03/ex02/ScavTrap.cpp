/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 15:54:41 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/05 15:27:30 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	_HitPoint = 100;
	_EnergyPoint = 50;
	_AttackDamage = 20;
	std::cout << "This is ScavTrap constructor\n";
}

void	ScavTrap::guardGate(){
	std::cout << "ScavTrap is now in Gate keeper mode\n";
}
ScavTrap::~ScavTrap() {std::cout << "This is ScavTrap destructor\n";}