/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 17:04:34 by bekhodad          #+#    #+#             */
/*   Updated: 2024/04/11 15:03:53 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.hpp"
#include <iomanip>
class PhoneBook{
	private:
		Contact		contacts[8];
		static int	current;
		static int	size;
	public:
		Contact		getContact(int index);
		void		setCurrent();
		int			getCurrent();
		void		printContact(Contact contact);
		void		ft_search(PhoneBook *phonebook);
		void		ft_add(PhoneBook *phonebook);
		void		printPhonebook(Contact contact);
};

bool		findEndOfFile(std::string *tmp);
std::string	fillingContact(std::string str);
std::string	fillingContactNumber(std::string str);
std::string	removeWhiteSpaces(std::string str);
std::string	fillingContactString(std::string str);