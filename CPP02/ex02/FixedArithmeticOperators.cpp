/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedArithmeticOperators.cpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:29:59 by lmarecha          #+#    #+#             */
/*   Updated: 2022/09/29 15:30:29 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed	Fixed::operator-( Fixed const & rhs ) {

	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator+( Fixed const & rhs ) {

	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator*( Fixed const & rhs ) {

	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/( Fixed const & rhs ) {

	return (Fixed(this->toFloat() / rhs.toFloat()));
}
