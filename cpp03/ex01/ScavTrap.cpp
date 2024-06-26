/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 15:54:41 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/11 10:44:21 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {std::cout << GRN << "ScavTrap default constructor.\n" << RES;}
/* ************************************************************************** */

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	_HitPoint = 100;
	_EnergyPoint = 50;
	_AttackDamage = 20;
	std::cout << GRN << "ScavTrap name constructor called\n" << RES;
}
/* ************************************************************************** */

ScavTrap::ScavTrap(const ScavTrap& rhs){
	std::cout << GRN << "ScavTrap copy constructor called\n" << RES;
	this->operator=(rhs);
}
/* ************************************************************************** */

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs){
	std::cout << GRN << "ScavTrap copy assignment called\n" << RES;
	this->_Name = rhs._Name;
	this->_EnergyPoint = rhs._EnergyPoint;
	this->_HitPoint = rhs._EnergyPoint;
	this->_AttackDamage = rhs._AttackDamage;
	return *this;
}
/* ************************************************************************** */

void	ScavTrap::attack(std::string target){
	if(this->_HitPoint > 0 && this->_EnergyPoint > 0){
		_EnergyPoint--;
		std::cout << GRN << "ScavTrap " << RES << _Name << " attacks " << target << " , causing " << RED << _AttackDamage << RES << " points of damage!\n" ;
	}
	else
		std::cout << GRN << "ScavTrap " << _Name << RES << " doesn't have enough energy point to attack\n";
}
/* ************************************************************************** */

void	ScavTrap::guardGate(){
	std::cout << GRN << "ScavTrap is now in Gate keeper mode\n" << RES;
}
/* ************************************************************************** */

ScavTrap::~ScavTrap() {std::cout << GRN << "ScavTrap destructor Called\n" << RES;}