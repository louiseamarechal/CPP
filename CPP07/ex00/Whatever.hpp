/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 15:14:12 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/23 21:49:47 by louisea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

#define RESET       "\033[0m"
#define BLACK       "\033[30m"
#define RED         "\033[31m"
#define GREEN       "\033[32m"
#define YELLOW      "\033[33m"
#define BLUE        "\033[34m"
#define MAGENTA     "\033[1m\033[35m"
#define CYAN        "\033[36m"
#define WHITE       "\033[37m"
#define BOLDVIOLET  "\033[1m\033[35m"
#define BOLDBLUE    "\033[1m\033[34m"

template< typename T >
void        swap( T a, T b );

template< typename T >
T const &   mymin( T const & x, T const & y );

template< typename T >
T const &   mymax( T const & x, T const & y );

#endif
