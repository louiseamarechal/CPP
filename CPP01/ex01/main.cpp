/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 14:08:21 by lmarecha          #+#    #+#             */
/*   Updated: 2022/08/12 14:27:17 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombiesClaudine;
	Zombie	*zombiesClaude;
	Zombie	*zombiesJeanne;
	Zombie	*zombiesJean;

	zombiesClaudine = zombieHorde(5, "Claudine");
	zombiesClaude = zombieHorde(5, "Claude");
	zombiesJeanne = zombieHorde(2, "Jeanne");
	zombiesJean = zombieHorde(2, "Jean");
	delete[] zombiesClaudine;
	delete[] zombiesClaude;
	delete[] zombiesJeanne;
	delete[] zombiesJean;
}
