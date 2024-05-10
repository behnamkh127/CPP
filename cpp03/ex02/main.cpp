/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 11:58:33 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/10 17:59:14 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void){
	ScavTrap S1("S1");
	S1.objIntroduce();
	
	
	FragTrap F1("F1");
	F1.objIntroduce();
	
	
	F1.attack(S1.get_name());
	F1.highFivesGuys();
	F1.beRepaired(S1.get_energy());


	S1.takeDamage(F1.get_attack());
	S1.beRepaired(S1.get_energy());
	S1.guardGate();


	return 0;
}