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
	if (level == "DEBUG")
		return 0;
	if (level == "INFO")
		return 1;
	if (level == "WARNING")
		return 2;
	if (level == "ERROR")
		return 3;
	if (level == "")
		return 4;
	return -1;  // return -1 or throw an exception if level is not valid
}

void	Harl::complain(std::string level){
	int	index = GetLevelIndex(level);
	switch(index){
        case 0:
            (this->*funcPtrs[0])();
        case 1:
            (this->*funcPtrs[1])();
        case 2:
            (this->*funcPtrs[2])();
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
