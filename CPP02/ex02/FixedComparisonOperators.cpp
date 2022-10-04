/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedComparisonOperators.cpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 13:56:37 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/04 16:18:52 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed&	Fixed::operator=( Fixed const & rhs ) {

	// std::cout << "Copy assignment operator called" << std::endl;

	if ( this != &rhs )
		this->_rawBits = rhs.getRawBits();

	return *this;
}

bool	Fixed::operator>( Fixed const & rhs ) {

	if (this->_rawBits > rhs.getRawBits())
		return (true);

	return (false);
}

bool	Fixed::operator<( Fixed const & rhs ) {

	if (this->_rawBits < rhs.getRawBits())
		return (true);

	return (false);
}

bool	Fixed::operator<=( Fixed const & rhs ) {


	if (this->_rawBits <= rhs.getRawBits())
		return (true);

	return (false);
}

bool	Fixed::operator>=( Fixed const & rhs ) {


	if (this->_rawBits >= rhs.getRawBits())
		return (true);

	return (false);
}

bool	Fixed::operator==( Fixed const & rhs ) {


	if (this->_rawBits == rhs.getRawBits())
		return (true);

	return (false);
}

bool	Fixed::operator!=( Fixed const & rhs ) {


	if (this->_rawBits != rhs.getRawBits())
		return (true);

	return (false);
}