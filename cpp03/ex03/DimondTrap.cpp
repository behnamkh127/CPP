/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DimondTrap.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 17:19:52 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/09 14:37:07 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DimondTrap.hpp"

DiamondTrap::DiamondTrap() {std::cout << RED << "DiamondTrap default constructor\n" << RES;}
/* ************************************************************************** */

DiamondTrap::DiamondTrap(std::string name) :  ScavTrap(name), FragTrap(name + "_clap_name"),_Name(name){
	_EnergyPoint = 50;
	std::cout << RED << "DiamondTrap name constructor called\n" << RES;
}
/* ************************************************************************** */
DiamondTrap::DiamondTrap(const DiamondTrap& rhs){
	std::cout << RED << "DiamondTrap copy constructor called\n" << RES;
	operator=(rhs);
}
/* ************************************************************************** */

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& rhs){
	_Name = rhs._Name;
	this->_EnergyPoint = rhs._EnergyPoint;
	return *this;
}
/* ************************************************************************** */

void	DiamondTrap::whoAmI(){
	std::cout << RED << "DiamondTrap object name is : " << _Name << " with this amount of energy: " << _EnergyPoint << std::endl << RES;
	std::cout << BLU << "ClapTrap object name is : " << ClapTrap::_Name << " with this amount of energy: " << ClapTrap::_EnergyPoint << std::endl << RES;
}
/* ************************************************************************** */

DiamondTrap::~DiamondTrap() {std::cout << RED << "DiamondTrap destructor called\n" << RES;}