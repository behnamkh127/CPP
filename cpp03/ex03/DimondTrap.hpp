/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DimondTrap.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 17:19:48 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/10 11:42:34 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{
	private:
		std::string _Name;
		//unsigned int _LocalEnergyPoint;
	public:
	//orthodox cannical form
		DiamondTrap();
		DiamondTrap(const DiamondTrap& rhs);
		DiamondTrap& operator=(const DiamondTrap& rhs);
		~DiamondTrap();
	//other member funcs
		DiamondTrap(std::string name);
		void	whoAmI();
	//getter for test
		void objectvalues(){
			std::cout  << _Name << " has hit point = " << _HitPoint;
			std::cout << ", energy point = " << ScavTrap::getEnergyPoint();
			std::cout << ", attack damage = " << _AttackDamage << std::endl;
		}
};