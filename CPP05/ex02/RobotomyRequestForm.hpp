/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:22:16 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/19 12:15:53 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class RobotomyRequestForm : public AForm {

	public:
		RobotomyRequestForm( std::string const & target );
		RobotomyRequestForm( RobotomyRequestForm const & src );


		~RobotomyRequestForm( void );

		std::string const &	getTarget() const;
		void				execute(Bureaucrat const & executor) const;

	private:
		RobotomyRequestForm&	operator=( RobotomyRequestForm const & rhs );
		RobotomyRequestForm( void );

		std::string	_target;
};

#endif