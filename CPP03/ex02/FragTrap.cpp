/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:02:42 by lmarecha          #+#    #+#             */
/*   Updated: 2022/09/30 15:15:06 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) {

	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap( std::string name) {

	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;

	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap( FragTrap const & src) {

	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src;

	return;
}

FragTrap const	& FragTrap::operator=( FragTrap const & rhs ) {

	if ( this != &rhs )
	{
		this->name = rhs.getName();
		this->hitPoints = rhs.getHitPoints();
		this->energyPoints = rhs.getEnergyPoints();
		this->attackDamage = rhs.getAttackDamage();
	}

	return (*this);
}

FragTrap::~FragTrap( void ) {

	std::cout << "FragTrap deconstructor called" << std::endl;

	return ;
}

void	FragTrap::highFivesGuys( void ) {

	if (this->energyPoints <= 0 || this->hitPoints <= 0)
	{
		std::cout << "you are too weak to ask for a high five" << std::endl;
		return ;
	}

	std::cout << "Can you please high five me ?" << std::endl;
}