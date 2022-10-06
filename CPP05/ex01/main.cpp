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
	Form		formA = Form("formA", false, 15, 15);

	std::cout << std::endl;
	std::cout << formA;
	std::cout << std::endl;

	try {
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
		jacinthe.signForm(formA);
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

