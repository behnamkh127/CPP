/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 10:58:59 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/11 10:38:00 by bekhodad         ###   ########.fr       */
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
		std::cout << BLU << "ClapTrap " << RES << _Name << " attacks " << target << " , causing " << RED << _AttackDamage << RES << " points of damage!\n";
	}
	else
		std::cout << BLU << "ClapTrap " << RES << _Name << " doesn't have enough energy point to attack\n";
}
/* ************************************************************************** */

void	ClapTrap::takeDamage(unsigned int amount){
	if(_HitPoint >= amount)
		_HitPoint -= amount;
	else
		_HitPoint = 0;
	std::cout << "This attack has " << amount << " damage on ClapTrap " << BLU << _Name << RES << " !!!And the current health is " << RED << _HitPoint << RES << ".\n";
}
/* ************************************************************************** */

void	ClapTrap::beRepaired(unsigned int amount){
	if (_EnergyPoint > 0 && _HitPoint > 0){
		_HitPoint += amount;
		_EnergyPoint--;
		std::cout  << "ClapTrap "<< BLU << _Name << RES << "'s Hitpoint reapaired by "<< RED << amount << RES << " and now is " << RED << _HitPoint << RES << ".\n"; 
	}
	else
		std::cout << "ClapTrap " << BLU << _Name << RES <<" doesn't have enough energy point to repair\n";
}
/* ************************************************************************** */

std::string	ClapTrap::get_name(){
	return _Name;
}
/* ************************************************************************** */

unsigned int	ClapTrap::get_attack(){
	return _AttackDamage;
}
/* ************************************************************************** */

unsigned int ClapTrap::get_hit(){
	return _HitPoint;
}
/* ************************************************************************** */

unsigned int ClapTrap::get_energy(){
	return _EnergyPoint;
}
/* ************************************************************************** */

void	ClapTrap::objIntroduce(){
	std::string ClassName;
	switch(get_energy() - get_attack()){
		case(30):
			ClassName = "ScavTrap";
			break;
		case(70):
			ClassName = "FragTrap";
			break;
		case(20):
			ClassName = "DiamondTrap";
			break;
		default:
			ClassName = "ClapTrap";
			break;}
	std::cout << YLW << "I'm " << get_name() << ", a robot from the " << ClassName << " class, ";
	std::cout << "I have " << RED << get_hit() << YLW <<" points amount of hitpoints and ";
	std::cout << RED << get_energy() << YLW << " points amount of energy and I'm attacking my enemies by ";
	std::cout << RED << get_attack() << YLW << " points amount of power.\n" << RES;
}
/* ************************************************************************** */

ClapTrap::~ClapTrap() {std::cout << BLU << "ClapTrap destructor called\n" << RES;}