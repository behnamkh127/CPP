/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:01:33 by bekhodad          #+#    #+#             */
/*   Updated: 2024/04/13 15:01:11 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Zombie{
	public:
		Zombie();
		~Zombie();
		void	announce(void);
		void	setName(std::string name);
	private:
		std::string	_name;	
};

Zombie*	zombieHorde(int N, std::string name);