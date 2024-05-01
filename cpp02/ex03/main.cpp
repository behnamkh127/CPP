/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekhodad <bekhodad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 16:21:47 by bekhodad          #+#    #+#             */
/*   Updated: 2024/05/01 11:46:00 by bekhodad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// int main() {
//     Point a(0, 0);
//     Point b(5, 0);
//     Point c(0, 5);
//     Point p(1, 1);  // Inside the triangle
//     Point q(10, 10);  // Outside the triangle

//     if (bsp(a, b, c, p))
//         std::cout << "Point p is inside the triangle.\n";
//     else
//         std::cout << "Point p is not inside the triangle.\n";

//     if (bsp(a, b, c, q))
//         std::cout << "Point q is inside the triangle.\n";
//     else
//         std::cout << "Point q is not inside the triangle.\n";

//     return 0;
// }

// #include "Point.hpp"

int main() {
    Point a(0, 0);
    Point b(5, 0);
    Point c(0, 5);

    // Use the copy constructor to create copies of a, b, and c
    Point a_copy(a);
    Point b_copy(b);
    Point c_copy(c);

    Point p(1, 1);  // Inside the triangle
    Point q(10, 10);  // Outside the triangle

    // Use the copy assignment operator to copy p and q
    Point p_copy = p;
    Point q_copy = q;

    if (bsp(a_copy, b_copy, c_copy, p_copy))
        std::cout << "Point p is inside the triangle.\n";
    else
        std::cout << "Point p is not inside the triangle.\n";

    if (bsp(a_copy, b_copy, c_copy, q_copy))
        std::cout << "Point q is inside the triangle.\n";
    else
        std::cout << "Point q is not inside the triangle.\n";

    return 0;
}