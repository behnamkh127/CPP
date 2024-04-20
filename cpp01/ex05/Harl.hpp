/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:21:46 by bekhodad          #+#    #+#             */
/*   Updated: 2024/04/19 09:52:35 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Harl {
	public:
		Harl();
		void	complain(std::string level);
		int		GetLevelIndex(std::string level);
		void	(Harl::*funcPtrs[4])(void);
	private:	
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};
