/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 11:58:33 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/08 13:56:15 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void){
	ScavTrap obj("behnam");
	FragTrap mamad("mamad");
	obj.guardGate();
	mamad.highFivesGuys();
	obj.attack("mamad");
	obj.beRepaired(13);
	mamad.takeDamage(32);
	mamad.beRepaired(6);
	return 0;
}