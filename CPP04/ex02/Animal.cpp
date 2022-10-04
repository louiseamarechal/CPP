/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:31:08 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/04 12:57:33 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal( void ) : type("AAnimal") {

	std::cout << "AAnimal default constructor called" << std::endl;

	return;
}

AAnimal::AAnimal( AAnimal const & src ) {

	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = src;

	return ;
}

AAnimal::~AAnimal( void ) {

	std::cout << "AAnimal deconstructor called" << std::endl;

	return;
}

std::string	AAnimal::getType() const {

	return (this->type);
}

AAnimal const	& AAnimal::operator=(AAnimal const & rhs) {

	if ( this != &rhs )
		this->type = rhs.getType();

	return (*this);
}