/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:04:40 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/16 13:39:54 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : virtual public Animal{
	private:
		std::string _type;
		Brain* catBrain;
	public:
		Cat();
		Cat(const Cat& rhs);
		Cat& operator=(const Cat& rhs);
		~Cat();
		
		void makeSound() const;
		std::string getType() const;
		void setCatIdea();
		std::string getCatIdeas(int i);
};