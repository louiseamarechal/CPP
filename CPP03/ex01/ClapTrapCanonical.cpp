/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrapCanonical.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:23:34 by lmarecha          #+#    #+#             */
/*   Updated: 2022/09/30 14:44:12 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) :
								name( "" ),
								hitPoints( 10 ),
								energyPoints( 10 ),
								attackDamage ( 0 ) {

	std::cout << "ClapTrap default constructor called " << std::endl;

	return;
}

ClapTrap::ClapTrap( std::string name ) :
											name( name ),
											hitPoints( 10 ),
											energyPoints( 10 ),
											attackDamage ( 0 ) {

	std::cout << "ClapTrap constructor called" << std::endl;

	return;
}

ClapTrap::ClapTrap( ClapTrap const & src ) {

	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = src;

	return ;
}

ClapTrap::~ClapTrap( void ) {

	std::cout << "ClapTrap deconstructor called" << std::endl;

	return ;
}

ClapTrap const	& ClapTrap::operator=( ClapTrap const & rhs ) {

	if ( this != &rhs )
	{
		this->name = rhs.getName();
		this->hitPoints = rhs.getHitPoints();
		this->energyPoints = rhs.getEnergyPoints();
		this->attackDamage = rhs.getAttackDamage();
	}

	return (*this);
}