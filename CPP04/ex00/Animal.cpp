/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:31:08 by lmarecha          #+#    #+#             */
/*   Updated: 2022/09/30 17:02:21 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : type("Animal") {

	std::cout << "Animal default constructor called" << std::endl;

	return;
}

Animal::Animal( Animal const & src ) {

	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;

	return ;
}

Animal::~Animal( void ) {

	std::cout << "Animal destructor called" << std::endl;

	return;
}

std::string	Animal::getType() const {

	return (this->type);
}

Animal const	& Animal::operator=(Animal const & rhs) {

	if ( this != &rhs )
		this->type = rhs.getType();

	return (*this);
}

void	Animal::makeSound() const {

	std::cout << "Animal sound" << std::endl;
}