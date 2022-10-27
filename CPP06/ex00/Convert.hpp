/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:49:35 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/27 16:14:34 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <limits>
#include <cstdio>

bool	isInt( char *argv );
bool	isDouble( char *argv );
bool	isChar( char *argv );
bool	isFloat( char *argv );
bool	isNan( char *argv );
bool	isInf( char *argv );
bool	isIntOF( char * argv );

void	printNan( void );
void	printInt( char *argv );
void	printDouble( char *argv );
void	printFloat( char *argv );
void	printChar( char *argv );
void	printInf( char *argv );

#endif