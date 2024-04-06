/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 17:06:41 by bekhodad          #+#    #+#             */
/*   Updated: 2024/04/06 15:59:16 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() : index(0){}
void Contact::setIndex(int i){
	index = i;
}
void Contact::SetContactFirstName(std::string NewFirstName){
	FirstName = NewFirstName;
}
void Contact::SetContactLastName(std::string NewLastName){
	LastName = NewLastName;
}
void Contact::SetContactNickName(std::string NewNickName){
	NickName = NewNickName;
}
void Contact::SetContactDarkestSecret(std::string NewDarkestSecret){
	DarkestSecret = NewDarkestSecret;
}
void Contact::SetContactNumber(std::string NewNumber){
	Number = NewNumber;
}
std::string Contact::getFirstName(){
	return(FirstName);
}
std::string Contact::getLastName(){
	return(LastName);
}
std::string Contact::getNickName(){
	return(NickName);
}
std::string Contact::getDarkestSecret(){
	return(DarkestSecret);
}
std::string Contact::getNumber(){
	return(Number);
}
int Contact::getIndex(){
	return(index);
}


void	flag(){
	std::cout << WIT << "******************************" << RES << std::endl;
	std::cout << RED << "******************************" << RES << std::endl;
	std::cout << WIT << "******************************" << RES << std::endl;
	std::cout << BLU << "*****WELCOME TO PHONEBOOK*****" << RES << std::endl;
	std::cout << WIT << "******************************" << RES << std::endl;
	std::cout << RED << "******************************" << RES << std::endl;
	std::cout << WIT << "******************************" << RES << std::endl;
}
