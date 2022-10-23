/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisea <louisea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 22:03:08 by louisea           #+#    #+#             */
/*   Updated: 2022/10/23 22:16:26 by louisea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

void	iter( T &a, int size, void fct() ) {

	for ( i = 0; i < size; i++ )
		fct(a[i]);
}
