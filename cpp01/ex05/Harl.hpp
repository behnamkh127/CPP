/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:21:46 by bekhodad          #+#    #+#             */
/*   Updated: 2024/04/18 13:03:53 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Harl {
	public:
		Harl();
		void	complain(std::string level);
		int		GetLevelIndex(std::string level);
	private:	
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		void	(Harl::*funcPtrs[4])(void);
};
