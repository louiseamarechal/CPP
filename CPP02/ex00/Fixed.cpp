/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 12:58:03 by lmarecha          #+#    #+#             */
/*   Updated: 2022/08/23 17:31:46 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _fixed( 0 ), _bits ( 8 ) {

	std::cout << "Default constructor called" << std::endl;

	return ;
}

Fixed::Fixed( Fixed const & src ) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return;
}

Fixed::~Fixed( void ) {

	std::cout << "Destructor called" << endl;

	return;
}

Fixed&	Fixed::operator=( Fixed const & rhs ) {

	std::cout << "Copy assignment operator called" << std::endl;

	if ( this != &rhs )
		this->_fixed = rhs.getRawBits();

	return *this;
}

void	Fixed::setRawBits( int const raw ) {


}

int		Fixed::getRawBits( void ) const {

	this->_fixed = setRawBits(this->_bits);

	return this->_fixed;
}
