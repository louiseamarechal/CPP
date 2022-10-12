/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:25:14 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/10 14:41:19 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

#include "AForm.hpp"

class AForm;

class Bureaucrat {

	public:
		class GradeTooHighException : public std::exception {

			public:
				virtual const char *what() const throw() {
					return("Your Bucreaute's grade is too high !");
				}
		};

		class GradeTooLowException : public std::exception {

			public:
				virtual const char *what() const throw() {
					return("Your Bucreaute's grade is too low !");
				}
		};

		Bureaucrat( std::string name, int grade );
		Bureaucrat( Bureaucrat const & src );

		Bureaucrat &	operator=( Bureaucrat const & rhs );

		~Bureaucrat( void );

		std::string const &	getName( void ) const;
		int					getGrade( void ) const;

		void				incrementBureaucrateGrade( void );
		void				decrementBureaucrateGrade( void );
		void				signForm( AForm& form );
		void				executeForm( AForm const & form );

	private:
		Bureaucrat( void );

		std::string const	_name;
		int					_grade;
};

std::ostream&	operator<<( std::ostream& os, Bureaucrat const & rhs );

#endif