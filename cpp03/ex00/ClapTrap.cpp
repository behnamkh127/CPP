/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 10:58:59 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/08 12:40:01 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _Name(""), _HitPoint(0), _EnergyPoint(0), _AttackDamage(0) {
	std::cout << "ClapTrap default constructor called\n";
}
/* ************************************************************************** */

ClapTrap::ClapTrap(std::string name) : _Name(name), _HitPoint(10), _EnergyPoint(10), _AttackDamage(0){
	std::cout << BLU << "ClapTrap name constructor called\n" << RES;
}
/* ************************************************************************** */

ClapTrap::ClapTrap(const ClapTrap& rhs){
	std::cout << "ClapTrap copy constructor called\n";
	this->operator=(rhs);
}
/* ************************************************************************** */

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs){
	std::cout << "ClapTrap copy assignment called\n";
	this->_Name = rhs._Name;
	this->_HitPoint = rhs._HitPoint;
	this->_EnergyPoint = rhs._EnergyPoint;
	this->_AttackDamage = rhs._AttackDamage;
	return *this;
}
/* ************************************************************************** */

void	ClapTrap::attack(const std::string& target){
	
	if(this->_HitPoint > 0 && this->_EnergyPoint > 0){
		_EnergyPoint--;
		std::cout << "ClapTrap " << _Name << " attacks " << target << " , causing " << _AttackDamage << " points of damage!\n";
	}
	else
		std::cout << "ClapTrap " << _Name << " doesn't have enough energy point to attack\n";
}
/* ************************************************************************** */

void	ClapTrap::takeDamage(unsigned int amount){
	if(_HitPoint >= amount)
		_HitPoint -= amount;
	else
		_HitPoint = 0;
	std::cout << "This attack has " << amount << " damage on ClapTrap " << _Name << " !!!And the current health is "<< _HitPoint << std::endl;
}
/* ************************************************************************** */

void	ClapTrap::beRepaired(unsigned int amount){
	if (_EnergyPoint > 0 && _HitPoint > 0){
		_HitPoint += amount;
		_EnergyPoint--;
		std::cout << "ClapTrap " << _Name << "'s Hitpoint reapaired by "<< amount << " and now is " << _HitPoint << std::endl; 
	}
	else
		std::cout << "ClapTrap " << _Name << " doesn't have enough energy point to repair\n";
}
/* ************************************************************************** */

ClapTrap::~ClapTrap() {std::cout << "ClapTrap destructor called\n";}