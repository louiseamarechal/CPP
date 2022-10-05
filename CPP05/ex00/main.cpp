/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:15:47 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/05 17:41:04 by lmarecha         ###   ########.fr       */
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

	try {
		Bureaucrat("Alex", 151);
	}
	catch(Bureaucrat::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	}
}