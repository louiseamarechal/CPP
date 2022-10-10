/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShruberryCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:16:33 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/10 17:49:10 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShruberryCreationForm.hpp"

/********************************************************/
/*						con/destructors					*/
/********************************************************/

ShruberryCreationForm::ShruberryCreationForm( std::string const & target) :
	AForm("Shruberry", false, 145, 137), _target(target) {

	// std::cout << "Shruberry constructor called" << std::endl;
	return;
}

ShruberryCreationForm::ShruberryCreationForm( ShruberryCreationForm const & src ) :
 	AForm("Shruberry", false, 145, 137), _target(src.getTarget()) {

	// std::cout << "Shruberry copy constructor called" << std::endl;
	return;
}

ShruberryCreationForm::~ShruberryCreationForm( void ) {

	// std::cout << "Shruberry destructor called" << std::endl;
	return;
}

/********************************************************/
/*							Operators					*/
/********************************************************/

// ShruberryCreationForm&	ShruberryCreationForm::operator=(ShruberryCreationForm const & rhs ) {
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

std::string const &	ShruberryCreationForm::getTarget() const {

	return (this->_target);
}

/********************************************************/
/*							Functions					*/
/********************************************************/
//
// void	getFileSize( std::ifstream	outfile, int* size ) {
//
// 	infile.seekg(0, infile.end); // move position to end of file
// 	*size = infile.tellg(); // get position number (position nb = filse *size) and store it
// 	if (*size == 0)
// 		std::cout << "File is empty" << std::endl;
// 	infile.seekg(0, infile.beg); // move back to beginning of file
// }

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





















