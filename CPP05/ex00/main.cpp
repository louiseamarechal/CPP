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
		antoine.incrementBureaucrateGrade();
		std::cout << antoine;
		antoine.decrementBureaucrateGrade();
		std::cout << antoine;
		antoine.decrementBureaucrateGrade();
		std::cout << antoine;
	}
	catch(Bureaucrat::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		Bureaucrat jacinthe = Bureaucrat("Jacinthe", 3);

		std::cout << jacinthe;
		jacinthe.decrementBureaucrateGrade();
		std::cout << jacinthe;
		jacinthe.incrementBureaucrateGrade();
		std::cout << jacinthe;
		jacinthe.incrementBureaucrateGrade();
		std::cout << jacinthe;
		jacinthe.incrementBureaucrateGrade();
		std::cout << jacinthe;
		jacinthe.incrementBureaucrateGrade();
		std::cout << jacinthe;
		jacinthe.incrementBureaucrateGrade();
		std::cout << jacinthe;
	}
	catch(Bureaucrat::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}

