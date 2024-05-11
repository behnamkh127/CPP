/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DimondTrap.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 17:19:52 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/11 10:35:18 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DimondTrap.hpp"

DiamondTrap::DiamondTrap() {std::cout << RED << "DiamondTrap default constructor\n" << RES;}
/* ************************************************************************** */

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name + "_clap_name"), _Name(name){
		ClapTrap::_EnergyPoint = ScavTrap::getEnergyPoint();
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
	return *this;
}
/* ************************************************************************** */

void	DiamondTrap::whoAmI(){
	std::cout << RED << "DiamondTrap" << RES << " object name is : " << RED << _Name << RES << std::endl;
	std::cout << BLU << "ClapTrap" << RES << " object name is : " << BLU << ClapTrap::_Name << RES << std::endl ;
}
/* ************************************************************************** */

DiamondTrap::~DiamondTrap() {std::cout << RED << "DiamondTrap destructor called\n" << RES;}