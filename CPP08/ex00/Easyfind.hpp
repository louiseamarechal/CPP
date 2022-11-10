/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:51:31 by lmarecha          #+#    #+#             */
/*   Updated: 2022/11/10 16:06:51 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <list>

template < typename T >
typename T::const_iterator    easyFind( T a, int i );

class NoMatchException : public std::exception {

			public:
				virtual const char *what() const throw() {
					return("We didn't find any match for this value !");
				}
		};

#include "Easyfind.tpp"

#endif