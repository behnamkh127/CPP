/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 10:58:59 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/05 15:26:03 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _Name(name), _HitPoint(10), _EnergyPoint(10), _AttackDamage(0){
	std::cout << "Default constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap& rhs){
	std::cout << "Copy constructor called\n";
	operator=(rhs);
}

ClapTrap ClapTrap::operator=(const ClapTrap& rhs){
	std::cout << "Copy assignment called\n";
	_Name = rhs._Name;
	_HitPoint = rhs._HitPoint;
	_EnergyPoint = rhs._EnergyPoint;
	_AttackDamage = rhs._AttackDamage;
	return (*this);
}

void	ClapTrap::attack(const std::string& target){
	
	if(this->_HitPoint > 0 && this->_EnergyPoint > 0){
		std::cout << "ClapTrap " << _Name << " attacks " << target << " , causing " << _AttackDamage << " points of damage!\n";
		this->beRepaired(_AttackDamage);
	}
	else
		std::cout << "Not enough Point to attack\n";
}

void	ClapTrap::takeDamage(unsigned int amount){
	_AttackDamage -= amount;
	std::cout << "This attack has " << amount << " damage!!!And the corrent attack damage is "<< _AttackDamage << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount){
	_HitPoint += amount;
	std::cout << "Hitpoint reapairred by "<< amount << " and now is " << _HitPoint << std::endl; 
	_EnergyPoint -= 1;
}

ClapTrap::~ClapTrap() {std::cout << "Destructor called\n";}