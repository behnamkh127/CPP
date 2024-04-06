/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 16:58:42 by bekhodad          #+#    #+#             */
/*   Updated: 2024/04/06 16:13:58 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	PhoneBook::current = 0;
/////////////////////////////////////////////////////////////////////////
void	PhoneBook::setCurrent(){
	current = (current + 1) % 8;
}
/////////////////////////////////////////////////////////////////////////
int	PhoneBook::getContactSize(){
	return sizeof(contacts) / sizeof(contacts[0]);
}
/////////////////////////////////////////////////////////////////////////
int	PhoneBook::getCurrent(){
	return current;
}
/////////////////////////////////////////////////////////////////////////
void	PhoneBook::printContact(Contact contact){
	std::cout << CYN << "Firstname: " << BLU << contact.getFirstName() << std::endl << RES;
	std::cout << CYN << "Lastname: " << BLU << contact.getLastName() << std::endl << RES;
	std::cout << CYN << "Nickname: " << BLU << contact.getNickName() << std::endl << RES;
	std::cout << CYN << "Number: " << BLU << contact.getNumber() << std::endl << RES;
	std::cout << CYN << "DarkestSecret: " << BLU << contact.getDarkestSecret() << std::endl << RES;
}
/////////////////////////////////////////////////////////////////////////
void	PhoneBook::printPhonebook(Contact contact)
{
    std::string tmp;

    std::cout << std::setw(10) << contact.getIndex() << " | ";
	
    tmp = contact.getFirstName();
    if (tmp.size() <= 10)
        std::cout << std::setw(10) << tmp;
    else
        std::cout << tmp.substr(0, 9) << ".";

    std::cout << '|';
    tmp = contact.getLastName();
    if (tmp.size() <= 10)
        std::cout << std::setw(10) << tmp;
    else
        std::cout << tmp.substr(0, 9) << ".";
	
    std::cout << '|';
    tmp = contact.getNickName();
    if (tmp.size() <= 10)
        std::cout << std::setw(10) << tmp << std::endl;
    else
        std::cout << tmp.substr(0, 9) << "." << std::endl;
}
/////////////////////////////////////////////////////////////////////////
void PhoneBook::ft_search(PhoneBook *phonebook){
	int i;
	for (int j = 0; j < phonebook->getContactSize(); j++)
		phonebook->printPhonebook(phonebook->contacts[j]);
	std::cout << GRN << "Please enter the index you want to find: " << RES;
	std::cin >> i;
	if (std::cin.fail())
	{
		if (std::cin.eof())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << std::endl;
			exit(0);
		}
		else
			exit(0);
	}
	if(i >= 0 && i < 8){
		phonebook->printContact(phonebook->contacts[i]);
	}else{
		std::cout << RED << "You entered WRONG NUMBER!!!\n" << RES;
	}
	std::cin.ignore();
}
/////////////////////////////////////////////////////////////////////////
void PhoneBook::ft_add(PhoneBook *phonebook){
	int	index = phonebook->getCurrent();
	std::string tmp = "";
	phonebook->contacts[index].setIndex(index);
	while(!tmp.size()){
		std::cout << GRN << "Firstname: " << RES;
		if (!std::getline(std::cin, tmp))
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << std::endl;
			exit(0);
		}
	}
	phonebook->contacts[index].SetContactFirstName(tmp);
	tmp = "";
	while(!tmp.size()){
		std::cout << GRN << "Lastname: " << RES;
		if (!std::getline(std::cin, tmp))
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << std::endl;
			exit(0);
		}
	}
	phonebook->contacts[index].SetContactLastName(tmp);
	tmp = "";
	while(!tmp.size()){
		std::cout << GRN << "Nickname: " << RES;
		if (!std::getline(std::cin, tmp))
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << std::endl;
			exit(0);
		}
	}
	phonebook->contacts[index].SetContactNickName(tmp);
	tmp = "";
	while(!tmp.size()){
		std::cout << GRN << "DarkestSecret: " << RES;
		if (!std::getline(std::cin, tmp))
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << std::endl;
			exit(0);
		}
	}
	phonebook->contacts[index].SetContactDarkestSecret(tmp);
	tmp = "";
	while(1){
		std::cout << GRN << "Number: " << RES;
		if (!std::getline(std::cin, tmp))
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << std::endl;
			exit(0);
		}
		else if (!tmp.size()){
			tmp = "";
			continue;
		}
		bool allDigits = true;
		for(std::string::size_type i = 0; i < tmp.size(); i++){
			if(!isdigit(tmp[i])){
				std::cout << RED << "You should only enter Numbers\n" << RES;
				allDigits = false;
				break;
			}
		}
		if(allDigits){
			phonebook->contacts[index].SetContactNumber(tmp);
			break;
		}
	}
	phonebook->setCurrent();
}
/////////////////////////////////////////////////////////////////////////
