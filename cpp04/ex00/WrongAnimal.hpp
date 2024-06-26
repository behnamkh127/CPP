/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:06:35 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/26 10:37:33 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class WrongAnimal{
	protected:
		std::string _type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& rhs);
		WrongAnimal& operator=(const WrongAnimal& rhs);
		virtual ~WrongAnimal();
		
		void makeSound() const;	
};