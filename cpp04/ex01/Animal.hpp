/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 11:40:13 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/16 15:37:17 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

#define RED "\033[31m"
#define GRN "\033[32m"
#define YLW "\033[33m"
#define BLU "\033[34m"
#define RES "\033[0m"
#define D "\xF0\x9F\x90\x95"
#define C "\xF0\x9F\x90\x88" 
#define A "\xF0\x9F\x90\xBE"
#define B "\U0001F9E0"


class Animal {
	protected:
		std::string _type;
	public:
		Animal();
		Animal(const Animal& rhs);
		Animal& operator=(const Animal& rhs);
		virtual ~Animal();
		
		virtual void makeSound() const;
		virtual std::string getType() const;
};