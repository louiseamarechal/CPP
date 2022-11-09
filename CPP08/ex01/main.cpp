/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:08:49 by louisea           #+#    #+#             */
/*   Updated: 2022/11/08 16:09:04 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main( void ) {

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

	return ( 0 );
}
