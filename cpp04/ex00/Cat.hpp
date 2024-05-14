/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:04:40 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/14 13:31:52 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Cat : virtual public Animal{
	private:
		std::string _type;
	public:
		Cat();
		Cat(const Cat& rhs);
		Cat& operator=(const Cat& rhs);
		~Cat();
		
		void makeSound() const;
		std::string getType() const;
};