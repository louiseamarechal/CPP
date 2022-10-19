/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:15:47 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/19 11:55:25 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShruberryCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main( void ) {

	Intern someRandomIntern;
	AForm* rrf;
	AForm* ppf;
	AForm* scf;
	Bureaucrat	antoine = Bureaucrat("Antoine", 150);
	Bureaucrat	jacinthe = Bureaucrat("Jacinthe", 1);

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	ppf = someRandomIntern.makeForm("presidential pardon", "Yo");
	scf = someRandomIntern.makeForm("shruberry creation", "Cactus");

	std::cout << std::endl;
	std::cout << *rrf;
	std::cout << std::endl;
	std::cout << *ppf;
	std::cout << std::endl;
	std::cout << *scf;
	std::cout << std::endl;
	std::cout << "---------------------------------" << std::endl;
	std::cout << antoine;
	std::cout << jacinthe;
	std::cout << "---------------------------------" << std::endl;
	std::cout << std::endl;

	try {
		std::cout << "Can Jacinthe sign the shruberry Form ?" << std::endl;
		jacinthe.signForm(*scf);
		std::cout << "Can Jacinthe execute the shruberry Form ?" << std::endl;
		scf->execute(jacinthe);
		std::cout << std::endl;
		std::cout << "Can Antoine sign the presidential Form ?" << std::endl;
		ppf->beSigned(antoine);
	}
	catch(AForm::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;
	}
	catch(AForm::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << *ppf;
	std::cout << std::endl;
	std::cout << *scf;
	std::cout << std::endl;

	delete rrf;
	delete ppf;
	delete scf;
}


















