/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:16:33 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/10 17:48:46 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/********************************************************/
/*						con/destructors					*/
/********************************************************/

PresidentialPardonForm::PresidentialPardonForm( std::string const & target) :
	AForm("Robotomy", false, 25, 5), _target(target) {

	// std::cout << "Robotomy constructor called" << std::endl;
	return;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src ) :
 	AForm("Robotomy", false, 25, 5), _target(src.getTarget()) {

	// std::cout << "Robotomy copy constructor called" << std::endl;
	return;
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {

	// std::cout << "Robotomy destructor called" << std::endl;
	return;
}

/********************************************************/
/*							Operators					*/
/********************************************************/

// PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs ) {
//
// 	if (this != &rhs)
// 		this->_target = rhs.getTarget();
//
// 	return (*this);
// }
//
/********************************************************/
/*							Getters						*/
/********************************************************/

std::string const &	PresidentialPardonForm::getTarget() const {

	return (this->_target);
}

/********************************************************/
/*							Functions					*/
/********************************************************/

void	PresidentialPardonForm::execute( Bureaucrat const & executor ) const {

	if (executor.getGrade() <= this->getGradeToExec())
		std::cout << "Zaphod Beeblebrox forgave " << _target << std::endl;
	else
		throw(GradeTooLowException());

	return;
}





















