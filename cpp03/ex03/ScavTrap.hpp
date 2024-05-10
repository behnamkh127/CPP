/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 15:35:42 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/10 11:01:40 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{
	private:
		unsigned int _EnergyPoint;
	public:
	//orthodox canonical form
		ScavTrap();
		ScavTrap(const ScavTrap& rhs);
		ScavTrap& operator=(const ScavTrap& rhs);
		~ScavTrap();
	//other member func
		ScavTrap(std::string name);
		void	attack(std::string target);
		void	guardGate();
		unsigned int getEnergyPoint();
};