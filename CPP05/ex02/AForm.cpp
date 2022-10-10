/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:44:08 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/10 17:46:22 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/********************************************************/
/*						con/destructors					*/
/********************************************************/

AForm::AForm( std::string name, bool sign, int gradeToSign, int gradeToExec) :
		_name(name),
		_signed(sign),
		_gradeToSign(gradeToSign),
		_gradeToExec(gradeToExec) {

	// std::cout << "AForm constructor called" << std::endl;
	return;
}

AForm::AForm( AForm const & src ) : _name(src.getName()),
 								_gradeToSign(src.getGradeToSign()),
								_gradeToExec(src.getGradeToExec()) {

	*this = src;

	// std::cout << "Copy constructor called" << std::endl;
	return;
}

AForm::~AForm( void ) {

	// std::cout << "AForm destructor called" << std::endl;
	return;
}

/********************************************************/
/*							Operators					*/
/********************************************************/

AForm&	AForm::operator=( AForm const & rhs ) {

	if (this != &rhs)
		this->_signed = rhs.getSigned();

	return (*this);
}

std::ostream&	operator<<( std::ostream& os, AForm const & rhs ) {

	os << rhs.getName() << ": " << std::endl;

	if (rhs.getSigned() == 1)
		os << "	Signed: Yes" << std::endl;
	else if (rhs.getSigned() == 0)
		os << "	Signed: No" << std::endl;

	os << "	required grade to sign: " << rhs.getGradeToSign() << std::endl;
	os << "	required grade to execute: " << rhs.getGradeToExec() << std::endl;

	return (os);
}

/********************************************************/
/*							Getters						*/
/********************************************************/

std::string const	AForm::getName() const {

	return (this->_name);
}

bool	AForm::getSigned() const {

	return (this->_signed);
}

int	AForm::getGradeToSign() const {

	return (this->_gradeToSign);
}

int	AForm::getGradeToExec() const {

	return (this->_gradeToExec);
}

/********************************************************/
/*							Functions					*/
/********************************************************/

void	AForm::setSigned( bool answer ) {

	this->_signed = answer;
}

void	AForm::beSigned( Bureaucrat& bureaucrat ) {

	if (bureaucrat.getGrade() <= this->_gradeToSign)
		this->_signed = true;
	else
		throw(GradeTooLowException());
}