/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 17:57:04 by bekhodad          #+#    #+#             */
/*   Updated: 2024/04/16 16:52:09 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class	HumanA{
	public:
		HumanA(std::string str, Weapon& weaponName);
		void	attack();
	private:
		std::string	_name;
		Weapon&		_Weapon;	
};