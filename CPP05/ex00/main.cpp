/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:15:47 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/06 15:03:23 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main( void ) {

	try {
		std::cout << "Trying to build a Bureaucrat with grade -2" << std::endl;
		Bureaucrat("Alex", -2);
	}
	catch(Bureaucrat::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Bureaucrat antoine = Bureaucrat("Antoine", 150);
		std::cout << antoine;
		std::cout << std::endl;
		std::cout << "Incrementing Antoine's grade: " << std::endl;
		antoine.incrementBureaucrateGrade();
		std::cout << antoine;
		std::cout << std::endl;
		std::cout << "Decrementing Antoine's grade: " << std::endl;
		antoine.decrementBureaucrateGrade();
		std::cout << antoine;
		std::cout << std::endl;
		std::cout << "Decrementing Antoine's grade: " << std::endl;
		antoine.decrementBureaucrateGrade();
		std::cout << antoine;
		std::cout << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "------------------------------------" << std::endl;

	try {
		Bureaucrat jacinthe = Bureaucrat("Jacinthe", 3);

		std::cout << jacinthe;
		std::cout << std::endl;
		std::cout << "Decrementing Jacinthe's grade: " << std::endl;
		jacinthe.decrementBureaucrateGrade();
		std::cout << jacinthe;
		std::cout << std::endl;
		std::cout << "Incrementing Jacinthe's grade: " << std::endl;
		jacinthe.incrementBureaucrateGrade();
		std::cout << jacinthe;
		std::cout << std::endl;
		std::cout << "Incrementing Jacinthe's grade: " << std::endl;
		jacinthe.incrementBureaucrateGrade();
		std::cout << jacinthe;
		std::cout << std::endl;
		std::cout << "Incrementing Jacinthe's grade: " << std::endl;
		jacinthe.incrementBureaucrateGrade();
		std::cout << jacinthe;
		std::cout << std::endl;
		std::cout << "Incrementing Jacinthe's grade: " << std::endl;
		jacinthe.incrementBureaucrateGrade();
		std::cout << jacinthe;
		std::cout << std::endl;
		std::cout << "Incrementing Jacinthe's grade: " << std::endl;
		jacinthe.incrementBureaucrateGrade();
		std::cout << jacinthe;
		std::cout << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}

