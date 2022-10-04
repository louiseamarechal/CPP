/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:47:01 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/04 12:52:03 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {

	std::cout << "Brain default constructor called" << std::endl;

	return;
}

Brain::Brain( Brain const & src ) {

	*this = src;

	return;
}

std::string	Brain::getIdea(int index) const {

	if ( index <= this->_nbIdeas )
		return (this->_ideas[index]);
	else
		return ( NULL );
}

void	Brain::setIdea(int index, std::string idea) {

	if ( index <= this->_nbIdeas )
		this->_ideas[index] = idea;
}

Brain const	& Brain::operator=( Brain const & rhs ) {

	int index = 0;

	if ( this != &rhs )
	{
		while ( index <= this->_nbIdeas )
		{
			this->_ideas[index] = rhs.getIdea(index);
			index++;
		}
	}

	return (*this);
}

Brain::~Brain( void ) {

	std::cout << "Brain deconstructor called" << std::endl;

	return;
}