/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:11:06 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/10 17:20:57 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class PresidentialPardonForm : public AForm {

	public:
		PresidentialPardonForm( std::string const & target );
		PresidentialPardonForm( PresidentialPardonForm const & src );


		~PresidentialPardonForm( void );

		std::string const &	getTarget() const;
		void				execute(Bureaucrat const & executor) const;

	private:
		PresidentialPardonForm&	operator=( PresidentialPardonForm const & rhs );
		PresidentialPardonForm( void );

		std::string const &	_target;
};

#endif