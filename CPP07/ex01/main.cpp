/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 22:03:08 by louisea           #+#    #+#             */
/*   Updated: 2022/10/25 17:22:30 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

template< typename T >
void	printContent( T a ) {

	std::cout << a << std::endl;
}

template< typename T >
void	iter( T *a, int size, void (*fct)(T a) ) {

	;
	for ( int i = 0; i < size; i++ )
		fct(a[i]);
}

int	main ( void ) {

	int			x[4] 		= { 1, 2, 3, 4 };
	std::string	strTab[4]	= { "Hello", "Bonjour", "Hola", "NULL" };
	char		str[]		= "Comment ca va ?";

	std::cout << BOLDVIOLET << "-----ITER ON INT-------" << RESET << std::endl;
	std::cout << MAGENTA << "int x[4] = { 1, 2, 3, 4 };" << RESET << std::endl;
	
	iter(x, 4, printContent);
	
	std::cout << BOLDVIOLET << "-----------------------" << RESET << std::endl;
	std::cout << BOLDVIOLET << "-----ITER ON STRING----" << RESET << std::endl;
	std::cout << MAGENTA << "std::string	strTab[4] = { 'Hello', 'Bonjour', 'Hola', 'NULL' };" << RESET << std::endl;
	
	iter(strTab, 3, printContent);
	
	std::cout << BOLDVIOLET << "-----------------------" << RESET << std::endl;
	std::cout << BOLDVIOLET << "-----ITER ON CHAR----" << RESET << std::endl;
	std::cout << MAGENTA << "char str[] = 'Comment ca va ?';" << RESET << std::endl;
	
	iter(str, 15, printContent);
	
	std::cout << BOLDVIOLET << "-----------------------" << RESET << std::endl;
	return (0);
}


