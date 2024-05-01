/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 17:09:17 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/01 17:10:16 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Fixed{
	public:
		Fixed();
		Fixed(const Fixed& other);
		Fixed&	operator=(const Fixed& other);
		int		getRawBits(void)const;
		void	setRawBits(int const raw);
		~Fixed();
	private:
		int					_fpn;
		static const int	_fb;
};
