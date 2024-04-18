/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:06:46 by bekhodad          #+#    #+#             */
/*   Updated: 2024/04/13 15:18:23 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Weapon{
	public:
		const std::string&	getWeapon();
		void				setWeapon(std::string newType);
	private:
		std::string _type;	
};