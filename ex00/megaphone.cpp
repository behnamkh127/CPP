/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:46:18 by bekhodad          #+#    #+#             */
/*   Updated: 2024/04/02 17:32:55 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av){
	if (ac > 1){
		for (int i = 1; i < ac; i++){
			int j = 0;
			while (av[i][j]){
				if(isalpha(av[i][j]))
					av[i][j] = toupper(av[i][j]);
				j++;
			}
			if (av[i])
			std::cout << av[i];
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << '\n';
}
