/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 13:50:16 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/02 07:58:12 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

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
		bool	operator==(const Fixed& other) const;
		bool	operator!=(const Fixed& other) const;
		bool	operator>(const Fixed& other) const;
		bool	operator>=(const Fixed& other) const;
		bool	operator<=(const Fixed& other) const;
		bool	operator<(const Fixed& other) const;
		Fixed	operator+(const Fixed& other) const;
		Fixed	operator-(const Fixed& other) const;
		Fixed	operator*(const Fixed& other) const;
		Fixed	operator/(const Fixed& other) const;
		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed	operator--(int);
		Fixed&	operator--();
		static const Fixed& min(const Fixed& a, const Fixed& b);
		static Fixed& min(Fixed& a, Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);
		float	toFloat(void)const;
		int		toInt(void)const;
		~Fixed();
	private:
		int _fpn;
		static const int _fb;
};
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);