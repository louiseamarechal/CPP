/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:16:33 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/12 17:02:19 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/********************************************************/
/*						con/destructors					*/
/********************************************************/

PresidentialPardonForm::PresidentialPardonForm( std::string const & target) :
	AForm("Presidential", 25, 5), _target(target) {

	std::cout << "Presidential constructor called" << std::endl;
	return;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src ) :
 	AForm("Presidential", 25, 5), _target(src.getTarget()) {

	*this = src;
	std::cout << "Presidential copy constructor called" << std::endl;
	return;
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {

	std::cout << "Presidential destructor called" << std::endl;
	return;
}

/********************************************************/
/*							Operators					*/
/********************************************************/

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs ) {

	if (this != &rhs)
		this->setSigned(rhs.getSigned());

	return (*this);
}
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





















