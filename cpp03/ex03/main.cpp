/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 11:58:33 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/09 12:48:09 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DimondTrap.hpp"

int main(void){
	DiamondTrap dt("Diamond");

	dt.objectvalues();
	dt.whoAmI();
    dt.ScavTrap::attack("Target");
    dt.FragTrap::takeDamage(10);
    dt.ScavTrap::beRepaired(5);
	// DimondTrap second(dt);
	// second.whoAmI();
    return 0;
}