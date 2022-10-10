/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:15:47 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/10 17:19:14 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShruberryCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main( void ) {

	Bureaucrat	antoine = Bureaucrat("Antoine", 150);
	Bureaucrat	jacinthe = Bureaucrat("Jacinthe", 1);
	ShruberryCreationForm	formS = ShruberryCreationForm("jardin");
	RobotomyRequestForm		formR = RobotomyRequestForm("robot");

	std::cout << std::endl;

	std::cout << "---------------------------------------" << std::endl;
	std::cout << "|             SHRUBERRY               |" << std::endl;
	std::cout << "---------------------------------------" << std::endl;
	std::cout << "--------------------------" << std::endl;
	std::cout << "|       Basique  Info    |" << std::endl;
	std::cout << "--------------------------" << std::endl;
	std::cout << formS;
	std::cout << std::endl;
	std::cout << antoine;
	std::cout << std::endl;
	std::cout << jacinthe;
	std::cout << std::endl;

	std::cout << "--------------------------" << std::endl;
	std::cout << "|         Sign Form      |" << std::endl;
	std::cout << "--------------------------" << std::endl;
	try {
		std::cout << "Can Antoine sign the Shruberry Form ?" << std::endl;
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
		std::cout << "Can Jacinthe sign the Shruberry Form ?" << std::endl;
		jacinthe.signForm(formS);
		std::cout << std::endl;
		std::cout << "Can Antoine sign the Shruberry Form ?" << std::endl;
		antoine.signForm(formS);
	}
	catch(AForm::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;
	}
	catch(AForm::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;


	std::cout << "--------------------------" << std::endl;
	std::cout << "|      Execute Form      |" << std::endl;
	std::cout << "--------------------------" << std::endl;
	try {
		std::cout << "Can Jacinthe execute the Shruberry Form ?" << std::endl;
		formS.execute(jacinthe);
		jacinthe.executeForm(formS);
		std::cout << std::endl;
		std::cout << "Can Antoine execute the Shruberry Form ?" << std::endl;
		antoine.executeForm(formS);
		formS.execute(antoine);
	}
	catch(AForm::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;
	}
	catch(AForm::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "---------------------------------------" << std::endl;
	std::cout << "|             ROBOTOMY               |" << std::endl;
	std::cout << "---------------------------------------" << std::endl;
	std::cout << "--------------------------" << std::endl;
	std::cout << "|       Basique  Info    |" << std::endl;
	std::cout << "--------------------------" << std::endl;
	std::cout << formR;
	std::cout << std::endl;
	std::cout << antoine;
	std::cout << std::endl;
	std::cout << jacinthe;
	std::cout << std::endl;

	std::cout << "--------------------------" << std::endl;
	std::cout << "|         Sign Form      |" << std::endl;
	std::cout << "--------------------------" << std::endl;
	try {
		std::cout << "Can Antoine sign the Robotomy Form ?" << std::endl;
		formR.beSigned(antoine);
	}
	catch(AForm::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;
	}
	catch(AForm::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		std::cout << "Can Jacinthe sign the Robotomy Form ?" << std::endl;
		jacinthe.signForm(formR);
		std::cout << std::endl;
		std::cout << "Can Antoine sign the Robotomy Form ?" << std::endl;
		antoine.signForm(formR);
	}
	catch(AForm::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;
	}
	catch(AForm::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "--------------------------" << std::endl;
	std::cout << "|      Execute Form      |" << std::endl;
	std::cout << "--------------------------" << std::endl;
	try {
		std::cout << "Can Jacinthe execute the Robotomy Form ?" << std::endl;
		formR.execute(jacinthe);
		jacinthe.executeForm(formR);
		std::cout << std::endl;
		std::cout << "Can Antoine execute the Robotomy Form ?" << std::endl;
		antoine.executeForm(formR);
		formR.execute(antoine);
	}
	catch(AForm::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;
	}
	catch(AForm::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}


















