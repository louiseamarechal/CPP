/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShruberryCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:16:33 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/12 17:02:32 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShruberryCreationForm.hpp"

/********************************************************/
/*						con/destructors					*/
/********************************************************/

ShruberryCreationForm::ShruberryCreationForm( std::string const & target) :
	AForm("Shruberry", 145, 137), _target(target) {

	std::cout << "Shruberry constructor called" << std::endl;
	return;
}

ShruberryCreationForm::ShruberryCreationForm( ShruberryCreationForm const & src ) :
 	AForm("Shruberry", 145, 137), _target(src.getTarget()) {
	
	*this = src;
	std::cout << "Shruberry copy constructor called" << std::endl;
	return;
}

ShruberryCreationForm::~ShruberryCreationForm( void ) {

	std::cout << "Shruberry destructor called" << std::endl;
	return;
}

/********************************************************/
/*							Operators					*/
/********************************************************/

ShruberryCreationForm&	ShruberryCreationForm::operator=(ShruberryCreationForm const & rhs ) {

	if (this != &rhs)
		this->setSigned(rhs.getSigned());
		
	return (*this);
}

/********************************************************/
/*							Getters						*/
/********************************************************/

std::string const &	ShruberryCreationForm::getTarget() const {

	return (this->_target);
}

/********************************************************/
/*							Functions					*/
/********************************************************/

void	ShruberryCreationForm::execute( Bureaucrat const & executor ) const {

	std::string		file;
	std::ofstream	outfile;
	std::ifstream	treeFile("tree.txt");

	file = this->_target + "_shrubbery";

	if (executor.getGrade() <= this->getGradeToExec())
	{
		outfile.open(file.c_str(), std::ofstream::out);
		if (outfile.is_open() && treeFile.is_open())
			outfile << treeFile.rdbuf();
		else
		{
			std::cout << "File can't be open" << std::endl;
			return;
		}
		outfile.close();
		treeFile.close();
	}
	else
		throw(GradeTooLowException());

	return;
}





















