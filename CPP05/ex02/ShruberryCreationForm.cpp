/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShruberryCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:16:33 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/06 17:58:36 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShruberryCreationForm.hpp"

/********************************************************/
/*						con/destructors					*/
/********************************************************/

ShruberryCreationForm::ShruberryCreationForm( std::string const & target) :
	Form("Shruberry", false, 145, 137), _target(target) {

	std::cout << "Shruberry constructor called" << std::endl;
	return;
}

ShruberryCreationForm::ShruberryCreationForm( ShruberryCreationForm const & src ) :
 	Form("Shruberry", false, 145, 137) {

	*this = src;

	std::cout << "Shruberry copy constructor called" << std::endl;
	return;
}

ShruberryCreationForm::~ShruberryCreationForm( void ) {

	std::cout << "Destructor called" << std::endl;
	return;
}

/********************************************************/
/*							Operators					*/
/********************************************************/

ShruberryCreationForm&	ShruberryCreationForm::operator=(ShruberryCreationForm const & rhs ) {

	if (this != &rhs)
		this->_target = rhs.getTarget();

	return (*this);
}

/********************************************************/
/*							Getters						*/
/********************************************************/

std::string const &	ShruberryCreationForm::getTarget() {

	return (this->_target);
}

/********************************************************/
/*							Functions					*/
/********************************************************/

void	ShruberryCreationForm::execute( Bureaucrat const & executor ) const {

	std::string	file;
	file = this->_target + "_shrubbery";

	if (executor.getGradeToExec() <= this->_gradeToExec())
	{
		std::ofstream	ofs(filename.c_str());
		if (!ofs)
		{
			std::cout << "File can't be open" << std::endl;
			return;
		}
		ofs << "Arbres ASCII";
	}

	return;
}





















