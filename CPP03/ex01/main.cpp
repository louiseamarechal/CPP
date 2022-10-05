/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 10:57:27 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/05 12:44:51 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void) {

	std::cout << "Constructor:" << std::endl;
	ScavTrap	Warrior = ScavTrap("Warrior");
	std::cout << "-------------------------" << std::endl;
	std::cout << std::endl;

	std::cout << "Warrior Hit Points : " << Warrior.getHitPoints() << std::endl;
	std::cout << "Warrior Energy Points : " << Warrior.getEnergyPoints() << std::endl;
	std::cout << std::endl;

	Warrior.attack("Soldier");
	std::cout << std::endl;

	std::cout << "Warrior Hit Points : " << Warrior.getHitPoints() << std::endl;
	std::cout << "Warrior Energy Points : " << Warrior.getEnergyPoints() << std::endl;
	std::cout << std::endl;

	Warrior.takeDamage(10);
	std::cout << std::endl;

	std::cout << "Warrior Hit Points : " << Warrior.getHitPoints() << std::endl;
	std::cout << "Warrior Energy Points : " << Warrior.getEnergyPoints() << std::endl;
	std::cout << std::endl;

	Warrior.beRepaired(10);
	std::cout << std::endl;
	Warrior.guardGate();
	std::cout << std::endl;

	std::cout << "Warrior Hit Points : " << Warrior.getHitPoints() << std::endl;
	std::cout << "Warrior Energy Points : " << Warrior.getEnergyPoints() << std::endl;
	std::cout << std::endl;

	Warrior.takeDamage(100);
	std::cout << std::endl;
	Warrior.attack("Soldier");
	Warrior.beRepaired(10);
	Warrior.guardGate();
	std::cout << std::endl;

	std::cout << "Warrior Hit Points : " << Warrior.getHitPoints() << std::endl;
	std::cout << "Warrior Energy Points : " << Warrior.getEnergyPoints() << std::endl;
	std::cout << std::endl;
	std::cout << "-------------------------" << std::endl;
	std::cout << "Destructor:" << std::endl;
}