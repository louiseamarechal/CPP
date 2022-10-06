/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:15:47 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/06 12:29:08 by lmarecha         ###   ########.fr       */
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
		std::cout << "Antoine original grade            : " << antoine.getGrade() << std::endl;
		antoine.incrementBureaucrateGrade();
		std::cout << "Antoine grade after incrementation: " << antoine.getGrade() << std::endl;
		antoine.decrementBureaucrateGrade();
		std::cout << "Antoine grade after decrementation: " << antoine.getGrade() << std::endl;
		antoine.decrementBureaucrateGrade();
		std::cout << "Antoine grade after decrementation: " << antoine.getGrade() << std::endl;
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

		std::cout << "Jacinthe origingal grade           : " << jacinthe.getGrade() << std::endl;
		jacinthe.decrementBureaucrateGrade();
		std::cout << "Jacinthe grade after decrementation: " << jacinthe.getGrade() << std::endl;
		jacinthe.incrementBureaucrateGrade();
		std::cout << "Jacinthe grade after incrementation: " << jacinthe.getGrade() << std::endl;
		jacinthe.incrementBureaucrateGrade();
		std::cout << "Jacinthe grade after incrementation: " << jacinthe.getGrade() << std::endl;
		jacinthe.incrementBureaucrateGrade();
		std::cout << "Jacinthe grade after incrementation: " << jacinthe.getGrade() << std::endl;
		jacinthe.incrementBureaucrateGrade();
		std::cout << "Jacinthe grade after incrementation: " << jacinthe.getGrade() << std::endl;
		jacinthe.incrementBureaucrateGrade();
		std::cout << "Jacinthe grade after incrementation: " << jacinthe.getGrade() << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}

