/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:21:19 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/21 12:15:20 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class AMateria{
	protected:
			std::string _type;
	public:
			AMateria();
			AMateria(std::string const & type);
			AMateria(const AMateria& rhs);
			AMateria& operator=(const AMateria& rhs);
			~AMateria();

			std::string const & gettype() const;
			
			virtual AMateria* clone() const = 0;
			virtual void use(ICharacter& target);	
};