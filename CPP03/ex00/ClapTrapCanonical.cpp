/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrapCanonical.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:23:34 by lmarecha          #+#    #+#             */
/*   Updated: 2022/09/29 18:31:01 by lmarecha         ###   ########.fr       */
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

ClapTrap	& ClapTrap::operator=( ClapTrap const & rh ) {

	if ( this != &rh )
	{
		this->_Name = rh.getName();
		this->_HitPoints = rh.getHitPoints();
		this->_EnergyPoints = rh.getEnergyPoints();
		this->_AttackDamage = rh.getAttackDamage();
	}

	return (*this);
}