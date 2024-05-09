/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 17:07:26 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/08 13:47:27 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {std::cout << YLW << "FragTrap default constructor\n" << RES;}
/* ************************************************************************** */

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	_HitPoint = 100;
	_EnergyPoint = 100;
	_AttackDamage = 30;
}
/* ************************************************************************** */

FragTrap::FragTrap(const FragTrap& rhs){
	std::cout << YLW << "FragTrap copy constructor called\n" << RES;
	this->operator=(rhs);
}
/* ************************************************************************** */

FragTrap& FragTrap::operator=(const FragTrap& rhs){
	std::cout << YLW << "FragTrap copy assignment called\n" << RES;
	this->_Name = rhs._Name;
	this->_EnergyPoint = rhs._EnergyPoint;
	this->_HitPoint = rhs._HitPoint;
	this->_AttackDamage = rhs._AttackDamage;
	return *this;
}
/* ************************************************************************** */

void	FragTrap::highFivesGuys(){
	std::cout << YLW << "FragTrap requests a positive high five!\n" << RES;
}
/* ************************************************************************** */

FragTrap::~FragTrap(){
	std::cout << YLW << "FragTrap destructor called\n" << RES;
}