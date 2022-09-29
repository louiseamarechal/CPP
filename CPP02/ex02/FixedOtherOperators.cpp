/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedOtherOperators.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:32:26 by lmarecha          #+#    #+#             */
/*   Updated: 2022/09/29 16:37:03 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

std::ostream&	operator<<(std::ostream& os, Fixed const & rhs) {

	os << rhs.toFloat();
	return (os);
}

Fixed	& Fixed::operator++() {

	this->_rawBits++;
	return (*this);
}

Fixed	Fixed::operator++(int) {

	Fixed	temp = *this;
	++*this;
	return (temp);
}

Fixed	& Fixed::operator--() {

	this->_rawBits--;
	return (*this);
}

Fixed	Fixed::operator--(int) {

	Fixed	temp = *this;
	--*this;
	return (temp);
}
