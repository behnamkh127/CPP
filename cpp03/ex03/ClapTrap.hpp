/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 12:12:49 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/09 12:50:05 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define RED "\033[31m"
#define GRN "\033[32m"
#define YLW "\033[33m"
#define BLU "\033[34m"
#define RES "\033[0m"

#include <iostream>
#include <string>

class ClapTrap{
	protected:
		std::string		_Name;
		unsigned int	_HitPoint;
		unsigned int	_EnergyPoint;
		unsigned int	_AttackDamage;
	public:
	//orthodox canonical form 
		ClapTrap();
		ClapTrap(const ClapTrap& rhs);
		ClapTrap& operator=(const ClapTrap& rhs);
		~ClapTrap();
	//other funtion members
		ClapTrap(std::string name);
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
	// //getter for test
	// 	void objectvalues(){
	// 		std::cout << RED << _Name << " has hit point = " << _HitPoint;
	// 		std::cout << ", energy point = " << _EnergyPoint;
	// 		std::cout << ", attack damage = " << _AttackDamage << std::endl << RES;
	// 	}
};
