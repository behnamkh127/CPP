/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 17:04:34 by bekhodad          #+#    #+#             */
/*   Updated: 2024/04/06 13:37:59 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.hpp"
#include <iomanip>

class PhoneBook{
	private:
		Contact		contacts[8];
		static int	current;
	public:
		int			getContactSize();
		Contact		getContact(int index);
		void		setCurrent();
		int			getCurrent();
		void		printContact(Contact contact);
		void		ft_search(PhoneBook *phonebook);
		void		ft_add(PhoneBook *phonebook);
		void		printPhonebook(Contact contact);
};
