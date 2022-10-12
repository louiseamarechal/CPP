/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:04:00 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/12 15:08:51 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Intern {

    public:
        Intern( void );
        Intern( Intern const & src );
        Intern &    operator=( Intern const & rhs );
        ~Intern( void );

        Form*   makeForm( std::string formName, std::string target );

}

#endif