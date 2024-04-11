/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 17:00:33 by bekhodad          #+#    #+#             */
/*   Updated: 2024/04/06 15:21:00 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#define RES "\033[0m"
#define RED "\033[31m"
#define GRN "\033[32m"
#define YLW "\033[33m"
#define BLU "\033[34m"
#define MGN "\033[35m"
#define CYN "\033[36m"
#define WIT "\033[37m"

class Contact{
	private:
		int 		index;
		std::string FirstName;
		std::string LastName;
		std::string NickName;
		std::string DarkestSecret;
		std::string Number;
	public:
		Contact();
		void		setIndex(int i);
		void		SetContactFirstName(std::string NewFirstName);
		void		SetContactLastName(std::string NewLastName);
		void		SetContactNickName(std::string NewNickName);
		void		SetContactDarkestSecret(std::string NewDarkestSecret);
		void		SetContactNumber(std::string NewNumber);
		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickName();
		std::string	getDarkestSecret();
		std::string	getNumber();
		int			getIndex();
};

void	flag();
