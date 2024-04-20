/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileClass.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:02:48 by bekhodad          #+#    #+#             */
/*   Updated: 2024/04/19 09:51:42 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <fstream>

class FileClass{
	public:
		FileClass(char* av[]);
		std::string	getFileName();
		std::string	getNewFileName();
		std::string	GetString(int i);
		bool		FailCondition(std::ifstream& file, std::ofstream& newFile);
		void		FillingNewFile(std::ifstream& file, std::ofstream& newFile);
	private:
		std::string filename;
		std::string filename2;
		std::string s1;
		std::string s2;
};

void	findLineCount(int& lineCount, std::ifstream& file);
