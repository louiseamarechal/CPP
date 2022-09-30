/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 10:57:27 by lmarecha          #+#    #+#             */
/*   Updated: 2022/09/30 15:15:34 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void) {

	FragTrap	Warrior = FragTrap("Warrior");

	std::cout << "Warrior Hit Points : " << Warrior.getHitPoints() << std::endl;
	std::cout << "Warrior Energy Points : " << Warrior.getEnergyPoints() << std::endl;

	Warrior.attack("Soldier");

	std::cout << "Warrior Hit Points : " << Warrior.getHitPoints() << std::endl;
	std::cout << "Warrior Energy Points : " << Warrior.getEnergyPoints() << std::endl;

	Warrior.takeDamage(10);

	std::cout << "Warrior Hit Points : " << Warrior.getHitPoints() << std::endl;
	std::cout << "Warrior Energy Points : " << Warrior.getEnergyPoints() << std::endl;

	Warrior.beRepaired(10);
	Warrior.highFivesGuys();

	std::cout << "Warrior Hit Points : " << Warrior.getHitPoints() << std::endl;
	std::cout << "Warrior Energy Points : " << Warrior.getEnergyPoints() << std::endl;

	Warrior.takeDamage(100);
	Warrior.attack("Soldier");
	Warrior.highFivesGuys();

	std::cout << "Warrior Hit Points : " << Warrior.getHitPoints() << std::endl;
	std::cout << "Warrior Energy Points : " << Warrior.getEnergyPoints() << std::endl;
}