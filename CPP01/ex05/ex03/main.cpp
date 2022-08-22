/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 14:30:32 by lmarecha          #+#    #+#             */
/*   Updated: 2022/08/18 15:51:57 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int	main(void) {

	Weapon	club1 = Weapon("crude spiked club");
	HumanA	bob("Bob", club1);

	std::cout << std::endl;

	bob.attack();
	club1.setType("some other type of club");
	bob.attack();
	std::cout << std::endl;

	Weapon  club2 = Weapon("crude spiked club");
	HumanB jim("Jim");

	std::cout << std::endl;

	jim.setWeapon(club2);
	jim.attack();
	club2.setType("some other type of club");
	jim.attack();

	return 0;
}
