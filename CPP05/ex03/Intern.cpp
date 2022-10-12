/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:10:09 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/12 17:04:39 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/********************************************************/
/*						Canonical Form					*/
/********************************************************/

Intern::Intern( void ) {

    std::cout << "Intern Default contructor called" << std::endl;
    return;
}

Intern::Intern( Intern const & src ) {
    
    *this = src;
    std::cout << "Intern copy constructor called" << std::cout;

    return;
}

Intern::~Intern( void ) {

    std::cout << "Intern destructor called" << std::endl;
    return;
}

Intern &    Intern::operator=( Intern const & rhs ) {

    if (this != &rhs)
        *this = rhs;

    return (*this);
}

/********************************************************/
/*							Functions					*/
/********************************************************/

AForm*  Intern::_presidentialPardon( std::string target ) {

    return (new PresidentialPardonForm(target));
}

AForm*  Intern::_robotomyRequestForm( std::string target ) {

    return (new RobotomyRequestForm(target));
}

AForm*  Intern::_shruberryCreationForm( std::string target ) {

    return (new ShruberryCreationForm(target));
}

AForm*  Intern::makeForm( std::string formName, std::string target ) {

    AForm*          ( Intern::*fctPtr[3] )( std::string target );
    std::string     formType[3] = { "presidential pardon", "robotomy request", "shruberry creation" };

    fctPtr[0] = &Intern::_presidentialPardon;
    fctPtr[1] = &Intern::_robotomyRequestForm;
    fctPtr[2] = &Intern::_shruberryCreationForm;

    for (size_t i = 0; i < 3; i++)
    {
        if (formType[i] == formName)
        {
            AForm* form = ( this->*fctPtr[i] )( target );
            std::cout << "Intern creates " << form->getName() << std::endl;
            
            return (form);
        }    
    }

    return (NULL);
}