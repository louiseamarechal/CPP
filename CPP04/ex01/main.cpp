/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:49:57 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/04 15:11:02 by lmarecha         ###   ########.fr       */
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
	Cat* i = new Cat();
	std::cout << std::endl;

	std::cout << "Copy of Cat: " << std::endl;
	Cat* c = new Cat(*i);
	std::cout << std::endl;

	std::cout << "Dog: " << std::endl;
	Dog* j = new Dog();
	std::cout << std::endl;

	std::cout << "Copy of Dog: " << std::endl;
	Dog* cd = new Dog(*j);
	std::cout << std::endl;

	std::cout << "Animal array: " << std::endl;
	const Animal* animals[4];

	animals[0] = new Cat();
	animals[1] = new Cat();
	animals[2] = new Dog();
	animals[3] = new Dog();

	std::cout << "-------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "-------- Animal Sounds ---------" << std::endl;

	std::cout << "Cat Sound: ";
	i->makeSound();
	std::cout << "Dog Sound: ";
	j->makeSound();
	std::cout << "Animal Sound: ";
	meta->makeSound();
	std::cout << "Copy of Cat Sound: ";
	c->makeSound();
	std::cout << std::endl;

	std::cout << "-------------------------------" << std::endl;
	std::cout << std::endl;

	std::cout << "-------- Animal Array Type ---------" << std::endl;

	for (int ix = 0; ix < 2; ix++)
		std::cout << "animal[" << ix << "] type: "<< animals[ix]->getType() << std::endl;

	for (int ix = 2; ix < 4; ix++)
		std::cout << "animal[" << ix << "] type: "<< animals[ix]->getType() << std::endl;

	std::cout << "-------------------------------" << std::endl;

	std::cout << std::endl;
	std::cout << "-------- Animal Array Ideas ---------" << std::endl;
	for (int ix = 0; ix < 4; ix++)
		animals[ix]->printIdeas();

	std::cout << "-------------------------------" << std::endl;
	std::cout << std::endl;

	std::cout << "-------- Copy Cat Idea ---------" << std::endl;
	std::cout << "Copy Cat ideas :" << std::endl;
	c->printIdeas();
	std::cout << "Modified idea[0] of original cat :" << std::endl;
	i->setIdea(0, "1st idea changed");
	i->setIdea(2, "New idea");
	i->printIdeas();
	std::cout << "Copy Cat ideas after modifying original cat ideas:" << std::endl;
	c->printIdeas();
	std::cout << "-------------------------------" << std::endl;
	
	std::cout << "-------- Copy dog Idea ---------" << std::endl;
	std::cout << "Copy dog ideas :" << std::endl;
	cd->printIdeas();
	std::cout << "Modified idea[0] of original dog :" << std::endl;
	j->setIdea(0, "1st idea changed");
	j->setIdea(2, "New idea");
	j->printIdeas();
	std::cout << "Copy dog ideas after modifying original dog ideas:" << std::endl;
	cd->printIdeas();
	std::cout << "-------------------------------" << std::endl;

	std::cout << std::endl;
	std::cout << "-------- Deconstructors ---------" << std::endl;
	std::cout << "Animal: " << std::endl;
	delete meta;
	std::cout << std::endl;

	std::cout << "Cat: " << std::endl;
	delete i;
	std::cout << std::endl;

	std::cout << "Copy Cat: " << std::endl;
	delete c;
	std::cout << std::endl;

	std::cout << "Copy Dog: " << std::endl;
	delete cd;
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