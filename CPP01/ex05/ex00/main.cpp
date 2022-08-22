/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 18:12:00 by lmarecha          #+#    #+#             */
/*   Updated: 2022/08/18 15:03:49 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main (void) {

	Zombie *Zombie1;

	Zombie1 = newZombie("Georgette");
	Zombie1->announce();

	delete Zombie1;

	randomChump("Georges");

	return (0);
}
