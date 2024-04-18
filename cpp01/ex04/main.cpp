/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:29:24 by bekhodad          #+#    #+#             */
/*   Updated: 2024/04/18 09:37:15 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileClass.hpp"

int	main(int ac, char* av[]){
	if (ac != 4) {
		std::cerr << "Usage: Number of aguments is less than required.\n";
		return 1;
	}
	
	FileClass newProject(av);
	std::ifstream file(newProject.getFileName());
	std::ofstream newFile(newProject.getNewFileName());
	if(newProject.FailCondition(file, newFile)){
		return 1;
	}
	newProject.FillingNewFile(file, newFile);
	return 0;
}
