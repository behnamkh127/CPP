/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DimondTrap.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 17:19:48 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/05 17:24:07 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DimondTrap : public FragTrap, public ScavTrap{
	private:

	public:
		DimondTrap(std::string name);
		void	whoAmI();
		~DimondTrap();
};