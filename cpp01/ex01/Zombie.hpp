/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:01:33 by bekhodad          #+#    #+#             */
/*   Updated: 2024/04/12 18:20:02 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Zombie{
	public:
		Zombie*	zombieHorde(int N, std::string name);
		void	announce(void);
	private:
		std::string	name;	
};