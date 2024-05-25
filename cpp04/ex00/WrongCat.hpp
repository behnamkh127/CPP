/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 17:18:22 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/17 17:36:24 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

class WrongCat: virtual public WrongAnimal
{
	private:
		std::string _type;
	public:
		WrongCat();
		WrongCat(const WrongCat& rhs);
		WrongCat& operator=(const WrongCat& rhs);
		~WrongCat();

		void makeSound() const;
};


