/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:15:47 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/06 16:59:19 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main( void ) {

	Bureaucrat	antoine = Bureaucrat("Antoine", 150);
	Bureaucrat	jacinthe = Bureaucrat("Jacinthe", 1);
	Form		formA = Form("formA", 15, 15);

	std::cout << std::endl;
	std::cout << formA;
	std::cout << std::endl;

	try {
		std::cout << antoine;
		std::cout << "Can Antoine sign the Form ?" << std::endl;
		formA.beSigned(antoine);
	}
	catch(Form::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;
	}
	catch(Form::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		std::cout << jacinthe;
		std::cout << "Can Jacinthe sign the Form ?" << std::endl;
		jacinthe.signForm(formA);
		std::cout << std::endl;
		std::cout << "What about Antoine ?" << std::endl;
		antoine.signForm(formA);
	}
	catch(Form::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;
	}
	catch(Form::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}