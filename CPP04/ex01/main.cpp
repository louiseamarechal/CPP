/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:49:57 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/03 17:24:49 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

int	main() {

	std::cout << "-------- Constructors ---------" << std::endl;
	std::cout << "Animal: " << std::endl;
	const Animal* meta = new Animal();
	std::cout << std::endl;

	std::cout << "Cat: " << std::endl;
	const Animal* i = new Cat();
	std::cout << std::endl;

	std::cout << "Dog: " << std::endl;
	const Animal* j = new Dog();

	std::cout << "Animal array: " << std::endl;
	const Animal animals[4];
	animals[0] = new Cat();
	animals[0] = setIdea(0, "Make that every days are Friday");
	animals[1] = new Cat();
	animals[1] = setIdea(1, "Rainy Days are over");
	animals[2] = new Dog();
	animals[2] = setIdea(2, "Fries are healthy vegetables");
	animals[3] = new Dog();
	animals[3] = setIdea(3, "We have Sun everyday");

	std::cout << "-------------------------------" << std::endl;
	std::cout << std::endl;

	std::cout << "Cat Sound: ";
	i->makeSound();
	std::cout << "Dog Sound: ";
	j->makeSound();
	std::cout << "Animal Sound: ";
	meta->makeSound();

	std::cout << std::endl;
	std::cout << "-------- Deconstructors ---------" << std::endl;
	std::cout << "Animal: " << std::endl;
	delete meta;
	std::cout << std::endl;
	std::cout << "Cat: " << std::endl;
	delete i;
	std::cout << std::endl;
	std::cout << "Dog: " << std::endl;
	delete j;
	std::cout << "---------------------------------" << std::endl;

return (0);
}