/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:08:14 by lmarecha          #+#    #+#             */
/*   Updated: 2022/09/29 17:09:45 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed		a;
	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << " -> ";
	std::cout << "Result should be :";
	std::cout << "0" << std::endl;

	std::cout << ++a << " -> ";
	std::cout << "Result should be :";
	std::cout << "0.00390625" << std::endl;

	std::cout << a << " -> ";
	std::cout << "Result should be :";
	std::cout << "0.00390625" << std::endl;

	std::cout << a++ << " -> ";
	std::cout << "Result should be :";
	std::cout << "0.00390625" << std::endl;

	std::cout << a << " -> ";
	std::cout << "Result should be :";
	std::cout << "0.0078125" << std::endl;

	std::cout << b << " -> ";
	std::cout << "Result should be :";
	std::cout << "10.1016" << std::endl;

	std::cout << Fixed::max( a, b ) << " -> ";
	std::cout << "Result should be :";
	std::cout << "10.1016" << std::endl;

	return (0);
}