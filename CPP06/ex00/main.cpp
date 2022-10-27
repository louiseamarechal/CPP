/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:16:32 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/27 15:51:26 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int	findType( char *argv ) {

	if ( isInt(argv) )
		return ( 'i' );
	else if ( isChar(argv) )
		return ( 'c' );
	else if ( isDouble(argv) )
		return ( 'd' );
	else if ( isFloat(argv) )
		return ( 'f' );
	else if ( isNan(argv) )
		return ( 'n' );
	else if ( isInf(argv) )
		return ( 'y' );

	return (0);
}

int	main(int argc, char **argv) {

	int i;

	if ( argc != 2 )
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}

	// if ( !isInt(argv[1]) && !isChar(argv[1]) && !isDouble(argv[1]) && !isFloat(argv[1]) )
	// 	std::cout << "Wrong input format !" << std::endl;

	i = findType(argv[1]);

	switch ( i ) {
		case 'i' :
			printInt(argv[1]);
			break;
		case 'c' :
			printChar(argv[1]);
			break;
		case 'f' :
			printFloat(argv[1]);
			break;
		case 'd' :
			printDouble(argv[1]);
			break;
		case 'n' :
			printNan();
			break;
		case 'y' :
			printInf(argv[1]);
			break;
		default :
			std::cout << "Wrong input format !" << std::endl;
	}
}