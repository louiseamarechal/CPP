/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:31:08 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/03 11:41:55 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : type("WrongAnimal") {

	std::cout << "WrongAnimal default constructor called" << std::endl;

	return;
}

WrongAnimal::WrongAnimal( WrongAnimal const & src ) {

	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;

	return ;
}

WrongAnimal::~WrongAnimal( void ) {

	std::cout << "WrongAnimal destructor called" << std::endl;

	return;
}

std::string	WrongAnimal::getType() const {

	return (this->type);
}

WrongAnimal const	& WrongAnimal::operator=(WrongAnimal const & rhs) {

	if ( this != &rhs )
		this->type = rhs.getType();

	return (*this);
}

void	WrongAnimal::makeSound() const {

	std::cout << "WrongAnimal sound" << std::endl;
}