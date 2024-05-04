/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 12:12:49 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/04 14:42:20 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class ClapTrap{
	private:
		std::string		_Name;
		unsigned int	_HitPoint;
		unsigned int	_EnergyPoint;
		int	_AttackDamage;
	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& rhs);
		ClapTrap	operator=(const ClapTrap& rhs);
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		~ClapTrap();
};
