/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:49:57 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/03 12:17:52 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int	main() {

	const Animal* meta = new Animal();
	const Animal* i = new Cat();
	const Animal* j = new Dog();

	const WrongAnimal* beta = new WrongAnimal();
	const WrongAnimal* k = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	std::cout << "Cat Sound: ";
	i->makeSound();//will output the cat sound!
	std::cout << "Dog Sound: ";
	j->makeSound();
	std::cout << "Animal Sound: ";
	meta->makeSound();

	std::cout << "Wrong Animal sound: ";
	beta->makeSound();
	std::cout << "Wrong Cat making wrong animal sound: ";
	k->makeSound();

	delete meta;
	delete i;
	delete j;
	delete beta;
	delete k;

return (0);
}