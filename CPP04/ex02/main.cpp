/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:49:57 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/04 12:57:23 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

int	main() {

	std::cout << "-------- Constructors ---------" << std::endl;
	// std::cout << "Animal: " << std::endl;
	// const AAnimal* meta = new AAnimal();
	// std::cout << std::endl;

	std::cout << "Cat: " << std::endl;
	const AAnimal* i = new Cat();
	std::cout << std::endl;

	std::cout << "Dog: " << std::endl;
	const AAnimal* j = new Dog();
	std::cout << std::endl;

	std::cout << "Animal array: " << std::endl;
	const AAnimal* animals[4];

	animals[0] = new Cat();
	animals[1] = new Cat();
	animals[2] = new Dog();
	animals[3] = new Dog();

	std::cout << "-------------------------------" << std::endl;
	std::cout << std::endl;

	std::cout << "Cat Sound: ";
	i->makeSound();
	std::cout << "Dog Sound: ";
	j->makeSound();
	// std::cout << "Animal Sound: ";
	// meta->makeSound();
	// std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "-------- Deconstructors ---------" << std::endl;
	// std::cout << "Animal: " << std::endl;
	// delete meta;
	// std::cout << std::endl;

	std::cout << "Cat: " << std::endl;
	delete i;
	std::cout << std::endl;

	std::cout << "Dog: " << std::endl;
	delete j;
	std::cout << std::endl;

	std::cout << "Animal array: " << std::endl;
	for (int ix = 0; ix < 4; ix++)
		delete animals[ix];
	std::cout << "---------------------------------" << std::endl;

return (0);
}