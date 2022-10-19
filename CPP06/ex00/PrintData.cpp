/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PrintData.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:45:46 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/19 11:21:26 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

void	printNan( void ) {

	std::cout << "float : nanf" << std::endl;
	std::cout << "double : nan" << std::endl;
	std::cout << "int : impossible" << std::endl;
	std::cout << "char : impossible" << std::endl;
}

void	printInf( char *argv ) {

	if ( argv[0] == '-' )
	{
		std::cout << "float : -inff" << std::endl;
		std::cout << "double : -inf" << std::endl;
	}
	else if ( argv[0] == '+'  || argv[0] == 'i' )
	{
		std::cout << "float : +inff" << std::endl;
		std::cout << "double : +inf" << std::endl;
	}
	std::cout << "int : impossible" << std::endl;
	std::cout << "char : impossible" << std::endl;
}

void	printInt( char *argv ) {

	int	i;

	sscanf(argv, "%d", &i);

	std::cout << "int : " << i << std::endl;
	std::cout << "double : " << static_cast< double >(i) << std::endl;
	std::cout << "float : " << static_cast< float >(i) << "f" << std::endl;

	if ( i < -128 || i > 127 )
		std::cout << "char : impossible" << std::endl;
	else if ( i  > 32 && i <= 126 )
		std::cout << "char : " << static_cast< char >(i) << std::endl;
	else
		std::cout << "char : non displayable" << std::endl;
}

void	printDouble( char *argv ) {

	double	d;

	sscanf(argv, "%lf", &d);

	std::cout << "double : " << d << std::endl;

	if ( d < std::numeric_limits<int>::min() || d > std::numeric_limits<int>::max() )
		std::cout << "int : impossible " << std::endl;
	else
		std::cout << "int : " << static_cast< int >(d) << std::endl;

	if ( d < -std::numeric_limits<float>::max() || d > std::numeric_limits<float>::max() )
		std::cout << "float : impossible" << std::endl;
	else
		std::cout << "float : " << static_cast< float >(d) << "f" << std::endl;

	if ( d < -128 || d > 127 )
		std::cout << "char : impossible" << std::endl;
	else if ( d  > 32 && d <= 126 )
		std::cout << "char : " << static_cast< char >(d) << std::endl;
	else
		std::cout << "char : non displayable" << std::endl;
}

void	printFloat( char *argv ) {

	float f;

	sscanf(argv, "%f", &f);

	std::cout << "float : " << f << "f" << std::endl;
	std::cout << "double : " << static_cast< double >(f) << std::endl;

	if ( f < std::numeric_limits<int>::min() || f > std::numeric_limits<int>::max() )
		std::cout << "int : impossible " << std::endl;
	else
		std::cout << "int : " << static_cast< int >(f) << std::endl;

	if ( f < -128 || f > 127 )
		std::cout << "char : impossible" << std::endl;
	else if ( f  > 32 && f <= 126 )
		std::cout << "char : " << static_cast< char >(f) << std::endl;
	else
		std::cout << "char : non displayable" << std::endl;
}

void	printChar( char *argv ) {

	char c;

	sscanf(argv, "%c", &c);

	std::cout << "int : " << static_cast< int >(c) << std::endl;
	std::cout << "double : " << static_cast< double >(c) << std::endl;
	std::cout << "float : " << static_cast< float >(c) << "f" << std::endl;

	if ( c < -128 || c > 127 )
		std::cout << "char : impossible" << std::endl;
	else if ( c  > 32 && c <= 126 )
		std::cout << "char : " << static_cast< char >(c) << std::endl;
	else
		std::cout << "char : non displayable" << std::endl;
}