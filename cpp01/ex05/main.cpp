/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:59:40 by bekhodad          #+#    #+#             */
/*   Updated: 2024/04/18 13:11:01 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char* av[]){
	Harl		obj;
	std::string str;
	
	switch(ac){
		case 1:
			obj.complain("");
			break;
		case 2:
			str = av[1];
			obj.complain(str);
			break;
		default:
			std::cerr << "More arguments than it's needed\n";
			break;
	}
	return 0;
}