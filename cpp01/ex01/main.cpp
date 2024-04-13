/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:21:09 by bekhodad          #+#    #+#             */
/*   Updated: 2024/04/12 18:26:13 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void){
	Zombie example;
	Zombie*example2 = example.zombieHorde(10, "behnam");
	for ( int i = 0; i < 12; i++){
		example2[i].announce();
	}
}