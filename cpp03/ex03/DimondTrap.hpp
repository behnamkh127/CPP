/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DimondTrap.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 17:19:48 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/11 10:09:13 by bekhodad         ###   ########.fr       */
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
};