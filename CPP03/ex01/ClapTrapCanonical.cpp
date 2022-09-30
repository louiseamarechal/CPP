/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrapCanonical.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:23:34 by lmarecha          #+#    #+#             */
/*   Updated: 2022/09/30 11:16:57 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) :
											_Name( name ),
											_HitPoints( 10 ),
											_EnergyPoints( 10 ),
											_AttackDamage ( 0 ) {

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
		this->_Name = rhs.getName();
		this->_HitPoints = rhs.getHitPoints();
		this->_EnergyPoints = rhs.getEnergyPoints();
		this->_AttackDamage = rhs.getAttackDamage();
	}

	return (*this);
}