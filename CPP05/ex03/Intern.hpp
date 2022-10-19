/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:04:00 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/19 12:13:12 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <string.h>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShruberryCreationForm.hpp"

class PresidentialPardonForm;
class RobotomyRequestForm;
class ShruberryCreationForm;
class AForm;

class Intern {

    public:
        Intern( void );
        Intern( Intern const & src );
        Intern &    operator=( Intern const & rhs );
        ~Intern( void );

        AForm*   makeForm( std::string formName, std::string target );

    private:
        AForm*    _presidentialPardon( std::string target );
        AForm*    _robotomyRequestForm( std::string target );
        AForm*    _shruberryCreationForm( std::string target );

};

#endif