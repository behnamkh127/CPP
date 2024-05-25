/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 11:40:02 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/16 13:57:55 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Brain{
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(const Brain& rhs);
		Brain& operator=(const Brain& rhs);
		~Brain();
		
		void setIdea(int i, const std::string& idea);
		std::string getIdea(int i);	
};