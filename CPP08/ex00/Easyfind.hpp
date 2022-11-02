/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:51:31 by lmarecha          #+#    #+#             */
/*   Updated: 2022/11/02 17:05:47 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <list>

template < typename T >
void    easyfind( T a, int i );

class NoMatchException : public std::exception {

			public:
				virtual const char *what() const throw() {
					return("We didn't find any match for this value !");
				}
		};

#include "Easyfind.tpp"

#endif