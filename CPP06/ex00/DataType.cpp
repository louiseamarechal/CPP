/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DataType.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:44:41 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/18 16:58:01 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

static bool	isDigit( char c ) {

	if ( c >= '0' && c <= '9' )
		return ( true );
	return ( false );
}

bool	isInt( char *argv ) {

	if ( *argv == '-' )
		argv++;

	while ( *argv )
	{
		if (  isDigit(*argv) )
			argv++;
		else
			return ( false );
	}

	return ( true );
}

bool	isDouble( char *argv ) {

	int	i = 0;

	if ( argv[i] == '-' )
		i++;

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

	if ( *argv > 32 && *argv <= 126 )
		return ( true );

	return ( false );
}

bool	isFloat( char *argv ) {

	int	i = 0;

	if ( argv[i] == '-' )
		i++;

	if ( !isDigit(argv[i]) )
		return ( false );

	while ( isDigit(argv[i]) )
		i++;

	if ( argv[i] == 46 && isDigit(argv[i + 1]))
		i++;
	else
		return ( false );

	while ( argv[i] && argv[i] != 'f' )
	{
		if ( isDigit(argv[i]) )
			i++;
		else
			return ( false );
	}

	if ( argv[i] == 'f' && argv[i + 1] == '\0' )
		return ( true );

	return ( false );
}