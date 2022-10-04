/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 12:46:14 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/04 16:12:03 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main ( void ) {

	Fixed		a;
	std::cout << std::endl;
	// std::cout << "Integer constructor -> b( 10 ):" << std::endl;
	Fixed const	b( 10 );
	std::cout << "----------------------" << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << std::endl;
	// std::cout << "Floating-point constructor -> c( 42.42f ):" << std::endl;
	Fixed const	c( 42.42f );
	std::cout << "--------------------------" << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << std::endl;
	// std::cout << "Copy constructor d( b ):" << std::endl;
	Fixed const	d( b );
	std::cout << "------------------" << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << std::endl;

	a = Fixed( 1234.4321f );
	std::cout << "------------------" << std::endl;
	std::cout << "a = " << a << std::endl;

	std::cout << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	std::cout << std::endl;

	return 0;
}

/*
$> ./a.out
Default constructor called
Int constructor called
Float constructor called
Copy constructor called
Copy assignment operator called
Float constructor called
Copy assignment operator called
Destructor called
a is 1234.43
b is 10
c is 42.4219
d is 10a is 1234 as integer
b is 10 as integer
c is 42 as integer
d is 10 as integer
Destructor called
Destructor called
Destructor called
Destructor called
$>
*/