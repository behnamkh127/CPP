/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:46:18 by bekhodad          #+#    #+#             */
/*   Updated: 2024/04/09 16:29:52 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av){
	if (ac > 1){
		for (int i = 1; i < ac; i++){
			std::string str = av[i];
			for (std::string::iterator j = str.begin(); j < str.end(); j++){
				if(isalpha(*j))
					*j = toupper(*j);
			}
			std::cout << str;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << '\n';
}
