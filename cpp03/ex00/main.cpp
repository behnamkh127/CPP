/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 11:58:33 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/08 13:26:33 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void){
	ClapTrap obj("behnam");
	ClapTrap obj2("mamad");
	// ClapTrap const obj3("mamad");
	// obj2 = obj3;
	obj.attack("mamad");
	obj.beRepaired(10);
	obj2.takeDamage(21);
	obj2.beRepaired(15);
	// obj.objectvalues();
	// obj2.objectvalues();
	return 0;
}