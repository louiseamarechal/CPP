/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:49:57 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/03 17:13:43 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

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
	std::cout << std::endl;
	std::cout << "Wrong Animal: " << std::endl;
	const WrongAnimal* beta = new WrongAnimal();
	std::cout << std::endl;
	std::cout << "Wrong Cat instantiate with WA: " << std::endl;
	const WrongAnimal* k = new WrongCat();
	std::cout << std::endl;
	std::cout << "Wrong Cat instantiate with WC: " << std::endl;
	const WrongCat* w = new WrongCat();
	std::cout << std::endl;

	std::cout << "-------------------------------" << std::endl;
	std::cout << std::endl;

	std::cout << "Dog->getType(): " << j->getType() << " " << std::endl;
	std::cout << "Cat->getType(): " << i->getType() << " " << std::endl;
	std::cout << std::endl;

	std::cout << "Cat Sound: ";
	i->makeSound();
	std::cout << "Dog Sound: ";
	j->makeSound();
	std::cout << "Animal Sound: ";
	meta->makeSound();

	std::cout << "Wrong Animal sound: ";
	beta->makeSound();
	std::cout << "Wrong Cat making wrong animal sound: ";
	k->makeSound();
	std::cout << "Wrong Cat making wrong cat sound: ";
	w->makeSound();

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
	std::cout << std::endl;
	std::cout << "Wrong Animal: " << std::endl;
	delete beta;
	std::cout << std::endl;
	std::cout << "Wrong Cat: " << std::endl;
	delete k;
	std::cout << "---------------------------------" << std::endl;


return (0);
}