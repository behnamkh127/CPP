/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:06:46 by bekhodad          #+#    #+#             */
/*   Updated: 2024/04/16 11:54:32 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Weapon{
	public:
		Weapon(std::string str);
		const std::string&	getType();
		void				setType(std::string newType);
	private:
		std::string _type;
};
