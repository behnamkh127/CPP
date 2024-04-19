/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:21:09 by bekhodad          #+#    #+#             */
/*   Updated: 2024/04/18 14:20:00 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void){
	Zombie*	example2;
	
	example2 = zombieHorde(10, "foo");
	for ( int i = 0; i < 10; i++){
		example2[i].announce();
	}
	if(example2)
		delete[] example2;
}