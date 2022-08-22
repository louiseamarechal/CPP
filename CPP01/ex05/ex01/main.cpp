/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 14:08:21 by lmarecha          #+#    #+#             */
/*   Updated: 2022/08/18 15:41:34 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombiesClaudine;
	Zombie	*zombiesClaude;
	Zombie	*zombiesJeanne;
	Zombie	*zombiesJean;
	int 	i;

	zombiesClaudine = zombieHorde(5, "Claudine");
	for (i = 0; i < 5; i++)
		zombiesClaudine[i].announce();

	std::cout << std::endl;
	delete[] zombiesClaudine;
	std::cout << std::endl;

	zombiesClaude = zombieHorde(5, "Claude");
	for (i = 0; i < 5; i++)
		zombiesClaude[i].announce();

	std::cout << std::endl;
	delete[] zombiesClaude;
	std::cout << std::endl;

	zombiesJeanne = zombieHorde(2, "Jeanne");
	for (i = 0; i < 2; i++)
		zombiesJeanne[i].announce();

	std::cout << std::endl;
	delete[] zombiesJeanne;
	std::cout << std::endl;

	zombiesJean = zombieHorde(2, "Jean");
	for (i = 0; i < 2; i++)
		zombiesJean[i].announce();

	std::cout << std::endl;
	delete[] zombiesJean;
}
