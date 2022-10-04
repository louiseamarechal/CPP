/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 12:46:14 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/04 15:28:38 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main ( void ) {

	Fixed a;
	Fixed b( a );
	Fixed c;
	std::cout << std::endl;

	std::cout << "c = b" << std::endl;
	c = b;
	std::cout << std::endl;

	std::cout << "a.getRawBits(): " << a.getRawBits() << std::endl;
	std::cout << "b.getRawBits(): " << b.getRawBits() << std::endl;
	std::cout << "c.getRawBits(): " << c.getRawBits() << std::endl;
	std::cout << std::endl;

	a.setRawBits(15);
	std::cout << "a.setRawBits(15)" << std::endl;
	std::cout << "a.getRawBits() = " << a.getRawBits() << std::endl;
	std::cout << std::endl;

	return 0;
}
