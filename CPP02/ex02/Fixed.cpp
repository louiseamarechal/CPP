/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 12:58:03 by lmarecha          #+#    #+#             */
/*   Updated: 2022/09/29 17:02:22 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const	Fixed::_fractionalPos = 8;

Fixed::Fixed( void ) : _rawBits( 0 ) {

	std::cout << "Default constructor called" << std::endl;

	return ;
}

Fixed::Fixed( const int src ) : _rawBits( 0 ) {

	std::cout << "Int constructor called" << std::endl;
	this->_rawBits = src << this->_fractionalPos;

	return ;
}

Fixed::Fixed( const float src ) : _rawBits( 0 ) {

	std::cout << "Float constructor called" << std::endl;
	this->_rawBits = roundf(src * (1 << this->_fractionalPos));
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