/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisea <louisea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 22:03:29 by louisea           #+#    #+#             */
/*   Updated: 2022/10/23 22:08:26 by louisea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ITER_HPP
# define ITER_HPP

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
void	iter( T &a, int size, void fct(T *a) );

#endif
