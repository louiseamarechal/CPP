/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:40:04 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/04 12:31:08 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) {

	std::cout << "Cat default constructor called" << std::endl;

	this->type = "Cat";
	this->_brain = new Brain();

	return ;
}

Cat::Cat(Cat const & src) {

	*this = src;
	std::cout << "Cat copy constructor called" << std::endl;

	return;
}

Cat::~Cat( void ) {

	delete this->_brain;

	std::cout << "Cat deconstructor called" << std::endl;

	return ;
}

Cat const	& Cat::operator=(Cat const & rhs) {

	if ( this != &rhs )
		this->type = getType();

	return (*this);
}

void	Cat::makeSound() const {

	std::cout << "Meooooow" << std::endl;
}