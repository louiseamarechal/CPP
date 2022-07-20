/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 11:06:34 by lmarecha          #+#    #+#             */
/*   Updated: 2022/07/20 11:43:15 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"

// dans la classe PhoneBook je veux acceder a la fonction PhoneBook()
PhoneBook::PhoneBook( void ) {

	std::cout << "Constructor called" << std::endl;

	this->contact = 42;
	std::cout << "this->contact = " << this->contact << std::endl;

	this->define_contact();

	return;
}

// dans la classe PhoneBook je veux acceder a la fonction ~PhoneBook()
PhoneBook::~PhoneBook( void ) {

	std::cout << "Deconstructor called" << std::endl;
	return;
}

void	PhoneBook::define_contact(void) {

	std::cout << "Define Contact called" << std::endl;
	return;
}
