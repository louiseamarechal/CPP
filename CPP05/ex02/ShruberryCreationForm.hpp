/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShruberryCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:11:06 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/06 17:46:07 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SHRUBERRYCREATIONFORM_HPP
# define SHRUBERRYCREATIONFORM_HPP

#include <ostream>
#include "Bureaucrat"
#include <fstream>

class Bureaucrat;

class ShruberryCreationForm : public AForm {

	public:
		ShruberryCreationForm( std::string const & target );
		ShruberryCreationForm( ShruberryCreationForm const & src );

		ShruberryCreationForm&	operator=( ShruberryCreationForm const & rhs );

		~ShruberryCreationForm( void );

		std::string	getTarget();
		void		execute(Bureaucrat const & executor) const;

	private:
		ShruberryCreationForm( void );

		std::string const &	_target;
};

#endif