/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 17:07:26 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/05 17:14:31 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	_HitPoint = 100;
	_EnergyPoint = 100;
	_AttackDamage = 30;
}

void	FragTrap::highFivesGuys(){
	std::cout << "FragTrap requests a positive high five!\n";
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap destructor\n";
}