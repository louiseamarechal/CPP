/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:16:33 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/12 17:02:10 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/********************************************************/
/*						con/destructors					*/
/********************************************************/

RobotomyRequestForm::RobotomyRequestForm( std::string const & target) :
	AForm("Robotomy", 72, 45), _target(target) {

	std::cout << "Robotomy constructor called" << std::endl;
	return;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src ) :
 	AForm("Robotomy", 72, 45), _target(src.getTarget()) {

	*this = src;
	std::cout << "Robotomy copy constructor called" << std::endl;
	return;
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {

	std::cout << "Robotomy destructor called" << std::endl;
	return;
}

/********************************************************/
/*							Operators					*/
/********************************************************/

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs ) {

	if (this != &rhs)
		this->setSigned(rhs.getSigned());
	return (*this);
}
//
/********************************************************/
/*							Getters						*/
/********************************************************/

std::string const &	RobotomyRequestForm::getTarget() const {

	return (this->_target);
}

/********************************************************/
/*							Functions					*/
/********************************************************/

void	RobotomyRequestForm::execute( Bureaucrat const & executor ) const {

	srand(time(NULL));
	int	success = rand();

	if (executor.getGrade() <= this->getGradeToExec())
	{
		std::cout << "**DRILL NOISE**" << std::endl;
		if (success % 2 == 0)
			std::cout << _target << " was successfully robotised !" << std::endl;
		else
			std::cout << _target << " was NOT successfully robotised !" << std::endl;
	}
	else
		throw(GradeTooLowException());

	return;
}





















