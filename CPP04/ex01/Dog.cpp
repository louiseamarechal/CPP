/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:40:04 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/03 17:07:22 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) {

	this->type = "Dog";
	this->_brain = new Brain();

	std::cout << "Dog default constructor called" << std::endl;

	return ;
}

Dog::Dog(Dog const & src) {

	*this = src;
	std::cout << "Dog copy constructor called" << std::endl;

	return;
}

Dog::~Dog( void ) {
	
	delete this->_brain;

	std::cout << "Dog deconstructor called" << std::endl;

	return ;
}

Dog const	& Dog::operator=(Dog const & rhs) {

	if ( this != &rhs )
		this->type = getType();

	return (*this);
}

void	Dog::makeSound() const {

	std::cout << "Woof Woof" << std::endl;
}