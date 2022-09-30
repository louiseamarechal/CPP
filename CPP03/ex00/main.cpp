/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 10:57:27 by lmarecha          #+#    #+#             */
/*   Updated: 2022/09/30 14:51:58 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {

	ClapTrap	Warrior = ClapTrap("Warrior");

	std::cout << "Warrior Hit Points : " << Warrior.getHitPoints() << std::endl;
	std::cout << "Warrior Energy Points : " << Warrior.getEnergyPoints() << std::endl;

	Warrior.attack("Soldier");

	std::cout << "Warrior Hit Points : " << Warrior.getHitPoints() << std::endl;
	std::cout << "Warrior Energy Points : " << Warrior.getEnergyPoints() << std::endl;

	Warrior.takeDamage(5);

	std::cout << "Warrior Hit Points : " << Warrior.getHitPoints() << std::endl;
	std::cout << "Warrior Energy Points : " << Warrior.getEnergyPoints() << std::endl;

	Warrior.beRepaired(10);

	std::cout << "Warrior Hit Points : " << Warrior.getHitPoints() << std::endl;
	std::cout << "Warrior Energy Points : " << Warrior.getEnergyPoints() << std::endl;

	Warrior.attack("Soldier");
	Warrior.attack("Soldier");
	Warrior.attack("Soldier");
	Warrior.attack("Soldier");
	Warrior.attack("Soldier");
	Warrior.attack("Soldier");
	Warrior.attack("Soldier");

	std::cout << "Warrior Hit Points : " << Warrior.getHitPoints() << std::endl;
	std::cout << "Warrior Energy Points : " << Warrior.getEnergyPoints() << std::endl;

	Warrior.attack("Soldier");

	std::cout << "Warrior Hit Points : " << Warrior.getHitPoints() << std::endl;
	std::cout << "Warrior Energy Points : " << Warrior.getEnergyPoints() << std::endl;

	Warrior.attack("Soldier");
}