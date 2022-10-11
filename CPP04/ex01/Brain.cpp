/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:47:01 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/04 15:05:39 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) : _nbIdeas(0) {

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

int		Brain::getNbIdeas( void ) const {

	return (this->_nbIdeas);
}

void	Brain::setIdea(int index, std::string idea) {

	if ( index <= this->_nbIdeas )
	{
		if (this->_ideas[index] == "")
			this->_nbIdeas += 1;
		this->_ideas[index] = idea;
	}

}

void	Brain::printIdeas( void ) const {

	for ( int i = 0; i < this->_nbIdeas; i++ )
		std::cout << this->getIdea(i) << std::endl;
	std::cout << std::endl;
}

Brain const	& Brain::operator=( Brain const & rhs ) {

	int index = 0;

	this->_nbIdeas = rhs.getNbIdeas();

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

	std::cout << "Brain destructor called" << std::endl;

	return;
}