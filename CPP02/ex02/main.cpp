/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:08:14 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/04 16:26:13 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed		a;
	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << std::endl;

	std::cout << "a = " << a << " -> ";
	std::cout << "Result should be :";
	std::cout << "0" << std::endl;
	std::cout << std::endl;

	std::cout << "++a = " << ++a << " -> ";
	std::cout << "Result should be :";
	std::cout << "0.00390625" << std::endl;
	std::cout << std::endl;

	std::cout << "a = " << a << " -> ";
	std::cout << "Result should be :";
	std::cout << "0.00390625" << std::endl;
	std::cout << std::endl;

	std::cout << "a++ \n" << a++ << std::endl;
	std::cout << "Result should be :";
	std::cout << "0.00390625" << std::endl;
	std::cout << std::endl;

	std::cout << "a = " << a << " -> ";
	std::cout << "Result should be :";
	std::cout << "0.0078125" << std::endl;
	std::cout << std::endl;

	std::cout << "b = " << b << " -> ";
	std::cout << "Result should be :";
	std::cout << "10.1016" << std::endl;
	std::cout << std::endl;

	std::cout << "Fixed::max( a, b ) = " << Fixed::max( a, b ) << " -> ";
	std::cout << "Result should be :";
	std::cout << "10.1016" << std::endl;
	std::cout << std::endl;

	return (0);
}