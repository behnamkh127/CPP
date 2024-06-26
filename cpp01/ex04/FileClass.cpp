/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileClass.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:02:26 by bekhodad          #+#    #+#             */
/*   Updated: 2024/04/19 10:17:21 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileClass.hpp"

FileClass::FileClass(char* av[]) : filename(av[1]), filename2("newFile.replace"), s1(av[2]), s2(av[3]) {} 
/* ************************************************************************** */
std::string FileClass::getFileName(){
	return (filename);
}
/* ************************************************************************** */
std::string FileClass::getNewFileName(){
	return (filename2);
}
/* ************************************************************************** */
std::string FileClass::GetString(int i){
	if(i == 1)
		return s1;
	return s2;
}
/* ************************************************************************** */
bool	FileClass::FailCondition(std::ifstream& file, std::ofstream& newFile){
	if (!file) {
		std::cerr << "Failed to open file: " << filename << '\n';
		return true;
	}
	if (file.peek() == std::ifstream::traits_type::eof()) {
	// The file is empty
		std::cerr << "File is empty: " << filename << '\n';
		return true;
	}
	if (!s1.size()){
		std::cerr << "Empty string included \n";
		return true;
	}
	if (!newFile) {
		std::cerr << "Failed to creat new file: " << filename2 << '\n';
		return true;
	}
	return false;
}
/* ************************************************************************** */
void	FileClass::FillingNewFile(std::ifstream& file, std::ofstream& newFile){
	std::string line;
    int lineCount = 0;
	
	findLineCount(lineCount, file);
	
	while (std::getline(file, line)){
		std::string::size_type i = 0;
		while(i <= line.size()){
			i = line.find(s1, 0);
			if (i == std::string::npos){
				newFile << line;
				if(lineCount){
					newFile << '\n';
					lineCount--;
				}
				break;
			}
			else{
				newFile << line.substr(0, i);
				newFile << s2;
				line = line.substr(i + s1.size(), line.size());
				i = 0;
			}
		}
	}
	
	while(lineCount){
		newFile << '\n';
		lineCount--;
	}
}
/* ************************************************************************** */
void	findLineCount(int& lineCount, std::ifstream& file){
	char ch;

	while (file.get(ch)) {
		if (ch == '\n') {
			lineCount++;
		}
	}
	file.clear();
	file.seekg(0, std::ios::beg);
}
