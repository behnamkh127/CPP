/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 11:58:33 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/10 17:50:55 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void){
	
	ScavTrap S1("S1");
	S1.objIntroduce();
	
	
	ClapTrap C1("C1");
	C1.objIntroduce();
	
	
	S1.attack(C1.get_name());
	S1.guardGate();
	C1.takeDamage(S1.get_attack());
	C1.beRepaired(C1.get_energy());
	
	
	return 0;
}