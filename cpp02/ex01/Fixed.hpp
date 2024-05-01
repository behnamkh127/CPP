/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 13:50:16 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/01 17:52:49 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cmath>

class Fixed{
	public:
		Fixed();
		Fixed(int const num);	
		Fixed(float const num);
		Fixed(const Fixed& other);
		Fixed&	operator=(const Fixed& other);
		float	toFloat(void)const;
		int		toInt(void)const;
		~Fixed();
	private:
		int _fpn;
		static const int _fb;
};
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);