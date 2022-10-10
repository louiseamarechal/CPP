/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:15:47 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/10 14:11:24 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShruberryCreationForm.hpp"

int	main( void ) {

	Bureaucrat	antoine = Bureaucrat("Antoine", 150);
	Bureaucrat	jacinthe = Bureaucrat("Jacinthe", 1);
	ShruberryCreationForm	formS = ShruberryCreationForm("jardin");

	std::cout << std::endl;
	std::cout << formS;
	std::cout << std::endl;
	std::cout << antoine;
	std::cout << std::endl;
	std::cout << jacinthe;
	std::cout << std::endl;

	try {
		std::cout << "Can Antoine sign the Form ?" << std::endl;
		formS.beSigned(antoine);
	}
	catch(AForm::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;
	}
	catch(AForm::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		std::cout << "Can Jacinthe sign the Form ?" << std::endl;
		jacinthe.signForm(formS);
		std::cout << std::endl;
		std::cout << "Can Antoine sign the Form ?" << std::endl;
		antoine.signForm(formS);
	}
	catch(AForm::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;
	}
	catch(AForm::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

}
