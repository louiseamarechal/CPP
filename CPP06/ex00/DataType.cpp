/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DataType.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:44:41 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/27 16:25:09 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

bool	isIntOF( char * argv )
{
	std::string max = "2147483647";
	std::string min = "2147483648";

	if ( max.compare(argv) < 0 )
		return ( true );
	if (*argv == '-')
	{
		argv++;
		if ( min.compare(argv) < 0 )
			return ( true );
	}
	return ( false );
}

static bool	isDigit( char c ) {

	if ( c >= '0' && c <= '9' )
		return ( true );
	return ( false );
}

bool	isNan( char *argv ) {

	if ( "nan" == std::string( argv ) || "nanf" == std::string( argv ) )
		return ( true );
	return ( false );
}

bool	isInf( char *argv ) {

	if ( "inf" == std::string( argv ) || "-inf" == std::string( argv ) ||
		"+inf" == std::string( argv ) || "inff" == std::string( argv ) ||
		"+inff" == std::string( argv ) || "-inff" == std::string( argv ))
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

	if (*argv == 39)
		argv++;

	for (; argv[i]; i++);

	if ( i != 1 )
	{
		if ( i == 2 && argv[i - 1] == 39)
			i -= 2 ;
		else
			return ( false );
	}

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