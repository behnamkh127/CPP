/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 11:58:33 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/11 10:12:09 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DimondTrap.hpp"

int main(void){
	DiamondTrap D1("D1");
	D1.objIntroduce();
	DiamondTrap D2("D2");
	D2.objIntroduce();

    D1.attack(D2.get_name());
	D1.whoAmI();
	D1.beRepaired(D2.get_energy());

	
    D2.takeDamage(D1.get_attack());
	D2.whoAmI();
    D2.beRepaired(D2.get_energy());

    return 0;
}