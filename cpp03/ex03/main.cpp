/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 11:58:33 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/10 11:41:17 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DimondTrap.hpp"

int main(void){
	DiamondTrap dt("Diamond");

	dt.objectvalues();
	dt.whoAmI();
    dt.attack("Target");
    dt.takeDamage(10);
    dt.beRepaired(5);
	// DimondTrap second(dt);
	// second.whoAmI();
    return 0;
}