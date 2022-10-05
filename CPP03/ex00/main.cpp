/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 10:57:27 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/05 12:12:54 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {

	std::cout << "Constructor:" << std::endl;
	ClapTrap	Warrior = ClapTrap("Warrior");
	std::cout << "-----------------------------" << std::endl;
	std::cout << std::endl;

	std::cout << "Warrior Hit Points : " << Warrior.getHitPoints() << std::endl;
	std::cout << "Warrior Energy Points : " << Warrior.getEnergyPoints() << std::endl;
	std::cout << std::endl;

	Warrior.attack("Soldier");
	std::cout << std::endl;

	std::cout << "Warrior Hit Points : " << Warrior.getHitPoints() << std::endl;
	std::cout << "Warrior Energy Points : " << Warrior.getEnergyPoints() << std::endl;
	std::cout << std::endl;

	Warrior.takeDamage(5);
	std::cout << std::endl;

	std::cout << "Warrior Hit Points : " << Warrior.getHitPoints() << std::endl;
	std::cout << "Warrior Energy Points : " << Warrior.getEnergyPoints() << std::endl;
	std::cout << std::endl;

	Warrior.beRepaired(10);
	std::cout << std::endl;

	std::cout << "Warrior Hit Points : " << Warrior.getHitPoints() << std::endl;
	std::cout << "Warrior Energy Points : " << Warrior.getEnergyPoints() << std::endl;
	std::cout << std::endl;

	Warrior.attack("Soldier");
	Warrior.attack("Soldier");
	Warrior.attack("Soldier");
	Warrior.attack("Soldier");
	Warrior.attack("Soldier");
	Warrior.attack("Soldier");
	Warrior.attack("Soldier");
	std::cout << std::endl;

	std::cout << "Warrior Hit Points : " << Warrior.getHitPoints() << std::endl;
	std::cout << "Warrior Energy Points : " << Warrior.getEnergyPoints() << std::endl;
	std::cout << std::endl;

	Warrior.attack("Soldier");
	std::cout << std::endl;

	std::cout << "Warrior Hit Points : " << Warrior.getHitPoints() << std::endl;
	std::cout << "Warrior Energy Points : " << Warrior.getEnergyPoints() << std::endl;
	std::cout << std::endl;

	Warrior.beRepaired(10);
	Warrior.attack("Soldier");
	std::cout << std::endl;
	std::cout << "-----------------------------" << std::endl;
	std::cout << "Destructor:" << std::endl;
}
