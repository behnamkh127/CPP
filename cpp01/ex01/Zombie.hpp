/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:01:33 by bekhodad          #+#    #+#             */
/*   Updated: 2024/04/13 12:49:22 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Zombie{
	public:
		void	announce(void);
		void	setName(std::string name);
	private:
		std::string	_name;	
};

Zombie*	zombieHorde(int N, std::string name);