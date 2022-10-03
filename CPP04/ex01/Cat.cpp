/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:40:04 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/03 17:07:16 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) {

	this->type = "Cat";
	this->_brain = new Brain();

	std::cout << "Cat default constructor called" << std::endl;

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