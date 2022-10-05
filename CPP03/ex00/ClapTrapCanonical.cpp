/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrapCanonical.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:23:34 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/05 12:02:43 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) :
											_name( name ),
											_hitPoints( 10 ),
											_energyPoints( 10 ),
											_attackDamage ( 0 ) {

	std::cout << "Default Constructor called" << std::endl;

	return;
}

ClapTrap::ClapTrap( ClapTrap const & src ) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return ;
}

ClapTrap::~ClapTrap( void ) {

	std::cout << "Deconstructor called" << std::endl;

	return ;
}

ClapTrap const	& ClapTrap::operator=( ClapTrap const & rhs ) {

	if ( this != &rhs )
	{
		this->_name = rhs.getName();
		this->_hitPoints = rhs.getHitPoints();
		this->_energyPoints = rhs.getEnergyPoints();
		this->_attackDamage = rhs.getAttackDamage();
	}

	return (*this);
}