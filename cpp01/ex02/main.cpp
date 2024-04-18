/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 13:21:00 by bekhodad          #+#    #+#             */
/*   Updated: 2024/04/13 14:29:45 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(){
	std::string		var = "HI THIS IS BRAIN";
	std::string*	ptr = &var;
	std::string&	ref = var;
	 
	 std::cout << &var << '\n';
	 std::cout << ptr << '\n';
	 std::cout << &ref << '\n';
	 std::cout << var << '\n';
	 std::cout << *ptr << '\n';
	 std::cout << ref << '\n';
}