/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 16:47:14 by bekhodad          #+#    #+#             */
/*   Updated: 2024/04/13 12:27:24 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Zombie{
	public:
		Zombie();
		~Zombie();
		void	setName(std::string name);
		void	announce(void);
	private:
		std::string	_name;	
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );
