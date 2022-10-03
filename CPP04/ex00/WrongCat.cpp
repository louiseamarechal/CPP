/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:40:04 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/03 11:43:19 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) {

	this->type = "WrongCat";
	std::cout << "WrongCat Default constructor called" << std::endl;

	return ;
}

WrongCat::WrongCat(WrongCat const & src) {

	*this = src;
	std::cout << "WrongCat copy constructor called" << std::endl;

	return;
}

WrongCat::~WrongCat( void ) {

	std::cout << "WrongCat deconstructor called" << std::endl;

	return ;
}

WrongCat const	& WrongCat::operator=(WrongCat const & rhs) {

	if ( this != &rhs )
		this->type = getType();

	return (*this);
}

void	WrongCat::makeSound() const {

	std::cout << "Wrong Meooooow" << std::endl;
}