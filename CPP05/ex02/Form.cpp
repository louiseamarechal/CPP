/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:44:08 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/06 17:20:53 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/********************************************************/
/*						con/destructors					*/
/********************************************************/

Form::Form( std::string name, bool sign, int gradeToSign, int gradeToExec) :
		_name(name),
		_signed(sign),
		_gradeToSign(gradeToSign),
		_gradeToExec(gradeToExec) {

	std::cout << "Form constructor called" << std::endl;
	return;
}

Form::Form( Form const & src ) : _name(src.getName()),
 								_gradeToSign(src.getGradeToSign()),
								_gradeToExec(src.getGradeToExec()) {

	*this = src;

	std::cout << "Copy constructor called" << std::endl;
	return;
}

Form::~Form( void ) {

	std::cout << "Form destructor called" << std::endl;
	return;
}

/********************************************************/
/*							Operators					*/
/********************************************************/

Form&	Form::operator=( Form const & rhs ) {

	if (this != &rhs)
		this->_signed = rhs.getSigned();

	return (*this);
}

std::ostream&	operator<<( std::ostream& os, Form const & rhs ) {

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

std::string const	Form::getName() const {

	return (this->_name);
}

bool	Form::getSigned() const {

	return (this->_signed);
}

int	Form::getGradeToSign() const {

	return (this->_gradeToSign);
}

int	Form::getGradeToExec() const {

	return (this->_gradeToExec);
}

/********************************************************/
/*							Functions					*/
/********************************************************/

void	Form::setSigned( bool answer ) {

	this->_signed = answer;
}

void	Form::beSigned( Bureaucrat& bureaucrat ) {

	if (bureaucrat.getGrade() <= this->_gradeToSign)
		this->_signed = true;
	else
		throw(GradeTooHighException());
}