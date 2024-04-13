/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:58:55 by bekhodad          #+#    #+#             */
/*   Updated: 2024/04/06 16:01:06 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void){
	std::string entrance;
	PhoneBook phonebook;

	flag();
	std::cout << YLW << "Enter a command: " << RES;
	while (std::getline(std::cin, entrance)){
		if(entrance == "ADD"){
			phonebook.ft_add(&phonebook);
		} else if (entrance == "SEARCH"){
			phonebook.ft_search(&phonebook);
		}else if (entrance == "EXIT"){
			std::cout << MGN << "Thank you for using the Phonebook\n" << RES;
			exit(0);
		}
		std::cout << YLW << "Enter a command: " << RES;
	}
	std::cout << std::endl;
	return 0;
}
