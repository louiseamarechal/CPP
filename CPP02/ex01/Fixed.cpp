/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 12:58:03 by lmarecha          #+#    #+#             */
/*   Updated: 2022/08/24 13:12:43 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const	Fixed::_fractionalPos = 8;

Fixed::Fixed( void ) : _rawBits( 0 ) {

	std::cout << "Default constructor called" << std::endl;

	return ;
}

Fixed::Fixed( Fixed const & src ) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return;
}

Fixed::~Fixed( void ) {

	std::cout << "Destructor called" << std::endl;

	return;
}

Fixed&	Fixed::operator=( Fixed const & rhs ) {

	std::cout << "Copy assignment operator called" << std::endl;

	if ( this != &rhs )
		this->_rawBits = rhs.getRawBits();

	return *this;
}

void	Fixed::setRawBits( int const raw ) {

	this->_rawBits = raw;
}

int		Fixed::getRawBits( void ) const {

	std::cout << "Get Raw Bits function called" << std::endl;
	return this->_rawBits;
}
