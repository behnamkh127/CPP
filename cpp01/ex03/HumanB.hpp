/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:54:37 by bekhodad          #+#    #+#             */
/*   Updated: 2024/04/19 09:51:11 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanB{
	public:
		HumanB(std::string str);
		void	setWeapon(Weapon& weaponName);
		void	attack();
	private:
		std::string	_name;
		Weapon*		_Weapon;
};
