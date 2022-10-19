/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShruberryCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:11:06 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/19 12:13:42 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SHRUBERRYCREATIONFORM_HPP
# define SHRUBERRYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class ShruberryCreationForm : public AForm {

	public:
		ShruberryCreationForm( std::string const & target );
		ShruberryCreationForm( ShruberryCreationForm const & src );


		~ShruberryCreationForm( void );

		std::string const &	getTarget() const;
		void				execute(Bureaucrat const & executor) const;

	private:
		ShruberryCreationForm&	operator=( ShruberryCreationForm const & rhs );
		ShruberryCreationForm( void );

		std::string _target;
};

#endif