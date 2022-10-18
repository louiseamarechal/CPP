/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PrintData.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:45:46 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/18 16:57:23 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

void	printInt( char *argv ) {

	int	i;

	sscanf(argv, "%d", &i);

	std::cout << "int : " << i << std::endl;
	std::cout << "double : " << static_cast< double >(i) << std::endl;
	std::cout << "float : " << static_cast< float >(i) << "f" << std::endl;
	if ( static_cast< char >(i)  > 32 &&  static_cast< char >(i) <= 126 )
		std::cout << "char : " << static_cast< char >(i) << std::endl;
	else
		std::cout << "char : non displayable" << std::endl;
}

void	printDouble( char *argv ) {

	double	d;

	sscanf(argv, "%lf", &d);

	std::cout << "int : " << static_cast< int >(d) << std::endl;
	std::cout << "double : " << d << std::endl;
	std::cout << "float : " << static_cast< float >(d) << "f" << std::endl;
	if ( static_cast< char >(d)  > 32 &&  static_cast< char >(d) <= 126 )
		std::cout << "char : " << static_cast< char >(d) << std::endl;
	else
		std::cout << "char : non displayable" << std::endl;
}

void	printFloat( char *argv ) {

	float f;

	sscanf(argv, "%f", &f);

	std::cout << "int : " << static_cast< int >(f) << std::endl;
	std::cout << "double : " << static_cast< double >(f) << std::endl;
	std::cout << "float : " << f << "f" << std::endl;
	if ( static_cast< char >(f)  > 32 &&  static_cast< char >(f) <= 126 )
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
	if ( c  > 32 && c <= 126 )
		std::cout << "char : " << c << std::endl;
	else
		std::cout << "char : non displayable" << std::endl;
}