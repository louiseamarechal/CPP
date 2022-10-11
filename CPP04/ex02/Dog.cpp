/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:40:04 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/11 14:38:40 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : _brain(new Brain()) {

	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";

	for (int i = 0; i < 2; i++)
		this->_brain->setIdea(i, "Cat idea");

	return ;
}

Dog::Dog(Dog const & src) : _brain(new Brain()) {

	*this = src;
	std::cout << "Dog copy constructor called" << std::endl;

	return;
}

Dog::~Dog( void ) {

	delete this->_brain;

	std::cout << "Dog destructor called" << std::endl;

	return ;
}

Dog const	& Dog::operator=(Dog const & rhs) {

	if ( this != &rhs )
	{
		this->type = rhs.getType();
		*this->_brain = *rhs.getBrain();
	}

	return (*this);
}

Brain*	Dog::getBrain( void ) const {

	return (this->_brain);
}

void	Dog::makeSound() const {

	std::cout << "Woof Woof" << std::endl;
}

void	Dog::setIdea( int index, std::string idea ) {

	this->_brain->setIdea(index, idea);
}

void	Dog::printIdeas( void ) const {

	this->_brain->printIdeas();
}