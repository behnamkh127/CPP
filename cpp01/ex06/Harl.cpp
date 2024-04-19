/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:24:39 by bekhodad          #+#    #+#             */
/*   Updated: 2024/04/18 14:10:35 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
    funcPtrs[0] = &Harl::debug;
    funcPtrs[1] = &Harl::info;
    funcPtrs[2] = &Harl::warning;
    funcPtrs[3] = &Harl::error;
}

int	Harl::GetLevelIndex(std::string level) {
	std::string messages[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int j = 0;
	int k = 0;
	std::string str;

	while(j < 4 && k == 0){
		str = messages[j];
		long unsigned int i = 0;
		int d = 0;
		while(i < str.size() && d == 0){
			char c1 = level[i];
			char c2 = str[i];
			d = (c1 - c2 == 0) ? (i++, 0) : -1;
		}
		k = (d == 0) ? 5 : (j++, 0);
	}

	return (j < 4) ? j : -1;
}

void	Harl::complain(std::string level){
	int	index = GetLevelIndex(level);
	switch(index){
        case 0:
            (this->*funcPtrs[0])();
			//fallthrough
        case 1:
            (this->*funcPtrs[1])();
			//fallthrough
        case 2:
            (this->*funcPtrs[2])();
			//fallthrough
        case 3:
            (this->*funcPtrs[3])();
            break;
        case 4:
            for(int i = 0; i < 4; i++)
				(this->*funcPtrs[i])();
            break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
			break;	
	}
}
void	Harl::debug(void){
	std::cout << "[ DEBUG ]" << '\n';
	std::cout << "I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!\n\n";
}

void	Harl::info(void){
	std::cout << "[ INFO ]" << '\n';
	std::cout << "I cannot believe adding extra bacon costs more money.\n";
	std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n\n";
}

void	Harl::warning(void){
	std::cout << "[ WARNING ]" << '\n';
	std::cout << "I think I deserve to have some extra bacon for free.\n";
	std::cout << "I’ve been coming for years whereas you started working here since last month.\n\n";
}

void	Harl::error(void){
	std::cout << "[ ERROR ]" << '\n';
	std::cout << "This is unacceptable! I want to speak to the manager now.\n\n";
}
