/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:15:47 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/10 17:51:10 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShruberryCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main( void ) {

	Bureaucrat	antoine = Bureaucrat("Antoine", 150);
	Bureaucrat	jacinthe = Bureaucrat("Jacinthe", 1);
	ShruberryCreationForm	formS = ShruberryCreationForm("jardin");

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
		jacinthe.executeForm(formS);
		std::cout << std::endl;
		std::cout << "Can Antoine execute the Shruberry Form ?" << std::endl;
		antoine.executeForm(formS);
	}
	catch(AForm::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;
	}
	catch(AForm::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	//--------------------------------------------------------------------//

	RobotomyRequestForm		formR = RobotomyRequestForm("robot");
	Bureaucrat	alex = Bureaucrat("Alex", 50);
	Bureaucrat	lea = Bureaucrat("Lea", 12);

	std::cout << "---------------------------------------" << std::endl;
	std::cout << "|             ROBOTOMY               |" << std::endl;
	std::cout << "---------------------------------------" << std::endl;
	std::cout << "--------------------------" << std::endl;
	std::cout << "|       Basique  Info    |" << std::endl;
	std::cout << "--------------------------" << std::endl;
	std::cout << formR;
	std::cout << std::endl;
	std::cout << alex;
	std::cout << std::endl;
	std::cout << lea;
	std::cout << std::endl;

	std::cout << "--------------------------" << std::endl;
	std::cout << "|         Sign Form      |" << std::endl;
	std::cout << "--------------------------" << std::endl;

	try {
		std::cout << "Can Lea sign the Robotomy Form ?" << std::endl;
		lea.signForm(formR);
		std::cout << std::endl;
		std::cout << "Can Alex sign the Robotomy Form ?" << std::endl;
		alex.signForm(formR);
	}
	catch(AForm::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;
	}
	catch(AForm::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << formR;
	std::cout << std::endl;
	std::cout << "--------------------------" << std::endl;
	std::cout << "|      Execute Form      |" << std::endl;
	std::cout << "--------------------------" << std::endl;
	try {
		std::cout << "Can Lea execute the Robotomy Form ?" << std::endl;
		lea.executeForm(formR);
		std::cout << std::endl;
		std::cout << "Can Alex execute the Robotomy Form ?" << std::endl;
		alex.executeForm(formR);
	}
	catch(AForm::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;
	}
	catch(AForm::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	//--------------------------------------------------------------------//

	PresidentialPardonForm	formP = PresidentialPardonForm("Alex");
	Bureaucrat	arthur = Bureaucrat("Arthur", 5);
	Bureaucrat	nico = Bureaucrat("Nico", 13);

	std::cout << "---------------------------------------" << std::endl;
	std::cout << "|             PRESIDENTIAL               |" << std::endl;
	std::cout << "---------------------------------------" << std::endl;
	std::cout << "--------------------------" << std::endl;
	std::cout << "|       Basique  Info    |" << std::endl;
	std::cout << "--------------------------" << std::endl;
	std::cout << formP;
	std::cout << std::endl;
	std::cout << arthur;
	std::cout << std::endl;
	std::cout << nico;
	std::cout << std::endl;

	std::cout << "--------------------------" << std::endl;
	std::cout << "|         Sign Form      |" << std::endl;
	std::cout << "--------------------------" << std::endl;

	try {
		std::cout << "Can Nico sign the Presidential Form ?" << std::endl;
		nico.signForm(formP);
		std::cout << std::endl;
		std::cout << "Can Arthur sign the Presidential Form ?" << std::endl;
		arthur.signForm(formP);
	}
	catch(AForm::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;
	}
	catch(AForm::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << formP;
	std::cout << std::endl;
	std::cout << "--------------------------" << std::endl;
	std::cout << "|      Execute Form      |" << std::endl;
	std::cout << "--------------------------" << std::endl;
	try {
		std::cout << "Can Arthur execute the Presidential Form ?" << std::endl;
		arthur.executeForm(formP);
		std::cout << std::endl;
		std::cout << "Can Nico execute the Presidential Form ?" << std::endl;
		nico.executeForm(formP);
	}
	catch(AForm::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;
	}
	catch(AForm::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}


















