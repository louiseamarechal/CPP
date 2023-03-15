/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:08:49 by louisea           #+#    #+#             */
/*   Updated: 2022/11/10 15:20:40 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main( void ) {

	try {
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << std::endl;
		std::cout << "sp : " << sp << std::endl;
		std::cout << std::endl;
		std::cout << "sp shortest distance = " << sp.shortestSpan() << std::endl;
		std::cout << "sp longest distance = " << sp.longestSpan() << std::endl;

		std::cout << std::endl;
		std::cout << "-------------------------" << std::endl;
		std::cout << std::endl;
		
		Span sp2(6);
		std::vector< int >	ref( 6, 9 );
		std::vector< int >::iterator	it = ref.begin();
		std::vector< int >::iterator	ite = ref.end();
		
		sp2.addNumbers( it, ite, 5 );

		std::cout << "sp2 : " << sp2 << std::endl;
		std::cout << std::endl;
		std::cout << "sp shortest distance = " << sp2.shortestSpan() << std::endl;
		std::cout << "sp longest distance = " << sp2.longestSpan() << std::endl;
		std::cout << std::endl;

		sp.addNumber(25);

	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Span sp3;
		std::cout << sp3.shortestSpan() << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Span sp4(1);
		std::cout << sp4.longestSpan() << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	return ( 0 );
}
