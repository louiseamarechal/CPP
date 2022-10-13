/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:16:32 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/13 17:16:01 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// bool	isFormatOk( char * argv ) {
//
// 	int	i = 0;
//
// 	for (; argv[i]; i++);
// 	{
// 		if ()
// 	}
//
// 	if ( i == 1 )
// 		return ( true );
//
// 	return ( false );
// }

bool	isDigit( char c )
{
	if ( c >= '0' && c <= '9' )
		return ( true );
	return ( false );
}

bool	isInt( char *argv ) {

	int	i = 0;

	for (; argv[i]; i++);

	if ( (i == 1) && isDigit(*argv) )
		return ( true );

	return ( false );
}

bool	isDouble( char *argv ) {

	int	i = 0;

	if ( !isDigit(argv[i]) )
		return ( false );
	while ( isDigit(argv[i]) )
		i++;
	if ( argv[i] == 46 && isDigit(argv[i + 1]))
		i++;
	else
		return ( false );
	while ( argv[i] )
	{
		if ( isDigit(argv[i]) )
			i++;
		else
			return ( false );
	}

	return ( true );
}

bool	isChar( char *argv ) {

	int	i = 0;

	for (; argv[i]; i++);

	if ( i != 1 )
		return ( false );

	if ( (*argv >= 65 && *argv <= 90) || (*argv >= 97 && *argv <= 122) )
		return ( true );

	return ( false );
}

int	main(int argc, char **argv) {

	if ( argc != 2 )
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}

	if ( isInt(argv[1]) == true )
		std::cout << argv[1] << " has type int" << std::endl;
	else if ( isChar(argv[1]) )
		std::cout << argv[1] << " has type char" << std::endl;
	else if ( isDouble(argv[1]) )
		std::cout << argv[1] << " has type double" << std::endl;
}