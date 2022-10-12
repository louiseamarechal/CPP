/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:10:09 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/12 15:15:27 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

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

    return;
}

Form*   Intern::makeForm( std::string formName, std::string target ) {

    
}