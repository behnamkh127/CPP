/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHord.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:20:38 by bekhodad          #+#    #+#             */
/*   Updated: 2024/04/12 18:20:59 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	Zombie::zombieHorde(int N, std::string name){
	Zombie* newZombie = new Zombie[10];
	for(int i = 0; i < N; i++){
		newZombie[i].name = name;
	}
	return newZombie;
}
