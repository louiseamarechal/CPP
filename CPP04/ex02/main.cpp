/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:49:57 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/11 14:42:40 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

int	main() {

	std::cout << "-------- Constructors ---------" << std::endl;

	// AAnimal test;
	std::cout << "Cat :" << std::endl;
	Cat cat1;
	std::cout << std::endl;
	std::cout << "Copy Cat :" << std::endl;
	Cat cat2(cat1);
	std::cout << std::endl;

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

	std::cout << std::endl;

	std::cout << "-------- Copy Cat Idea ---------" << std::endl;
	std::cout << "Copy Cat ideas :" << std::endl;
	cat2.printIdeas();
	std::cout << "Modified idea[0] of original cat :" << std::endl;
	cat1.setIdea(0, "1st idea changed");
	cat1.setIdea(2, "New idea");
	cat1.printIdeas();
	std::cout << "Copy Cat ideas after modifying original cat ideas:" << std::endl;
	cat2.printIdeas();
	std::cout << "-------------------------------" << std::endl;

	std::cout << "-------- Deconstructors ---------" << std::endl;

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