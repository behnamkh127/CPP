/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 11:58:33 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/10 17:50:10 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void){
	ClapTrap C1("C1");
	ClapTrap C2("C2");

	C1.objIntroduce();
	C2.objIntroduce();

	C1.attack(C2.get_name());
	C2.takeDamage(C1.get_attack());
	C1.beRepaired(C2.get_hit());
	C2.beRepaired(C2.get_energy());


	return 0;
}