/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:40:04 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/04 15:14:00 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : _brain(new Brain()) {

	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";

	for (int i = 0; i < 2; i++)
		this->_brain->setIdea(i, "Cat idea");

	return ;
}

Cat::Cat(Cat const & src) : _brain(new Brain()) {

	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;

	return;
}

Cat::~Cat( void ) {

	delete this->_brain;

	std::cout << "Cat deconstructor called" << std::endl;

	return ;
}

Cat const	& Cat::operator=( Cat const & rhs ) {

	if ( this != &rhs )
	{
		this->type = rhs.getType();
		*this->_brain = rhs.getBrain();
	}

	return (*this);
}

Brain		Cat::getBrain( void ) const {

	return (*this->_brain);
}

void	Cat::makeSound() const {

	std::cout << "Meooooow" << std::endl;
}

void	Cat::setIdea( int index, std::string idea ) {

	this->_brain->setIdea(index, idea);	
}

void	Cat::printIdeas( void ) const {

	this->_brain->printIdeas();
}