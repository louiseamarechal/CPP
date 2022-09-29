/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedFunctions.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:51:12 by lmarecha          #+#    #+#             */
/*   Updated: 2022/09/29 17:02:51 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int		Fixed::toInt( void ) const {
	return (this->_rawBits >> this->_fractionalPos);
}

float	Fixed::toFloat( void ) const {
	return ((float)this->_rawBits / (1 << this->_fractionalPos));
}

void	Fixed::setRawBits( int const raw ) {

	this->_rawBits = raw;
}

int		Fixed::getRawBits( void ) const {

	return this->_rawBits;
}

Fixed	& Fixed::min( Fixed & nb1, Fixed & nb2 ) {

	if (nb1.getRawBits() < nb2.getRawBits())
		return (nb1);
	return (nb2);
}

Fixed const	& Fixed::min( Fixed const & nb1, Fixed const & nb2 ) {

	if (nb1.getRawBits() < nb2.getRawBits())
		return (nb1);
	return (nb2);
}

Fixed		& Fixed::max( Fixed & nb1, Fixed & nb2 ) {

		if (nb1.getRawBits() > nb2.getRawBits())
			return (nb1);
		return (nb2);
}

Fixed const	& Fixed::max( Fixed const & nb1, Fixed const & nb2 ) {

		if (nb1.getRawBits() > nb2.getRawBits())
			return (nb1);
		return (nb2);
}