/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 14:08:31 by lmarecha          #+#    #+#             */
/*   Updated: 2022/08/18 15:38:05 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name) {

	Zombie	*zombies;
	int		i;

	zombies = new Zombie[N];
	i = 0;

	while (i < N)
	{
		zombies[i].setZombieName(name);
		i++;
	}

	return (zombies);
}
