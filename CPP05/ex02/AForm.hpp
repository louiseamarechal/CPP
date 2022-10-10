/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:22:15 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/10 14:35:36 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {

	public:
		class GradeTooHighException : public std::exception {

			public:
				virtual const char *what() const throw() {
					return("Requested grade is too high to take action!");
				}
		};

		class GradeTooLowException : public std::exception {

			public:
				virtual const char *what() const throw() {
					return("Requested grade is too low to take action!");
				}
		};

		AForm( std::string name, bool sign, int gradeToSign, int gradeToExec);
		AForm( AForm const & src );
		~AForm( void );

		AForm&	operator=( AForm const & rhs );

		std::string const	getName() const;
		bool				getSigned() const;
		int					getGradeToSign() const;
		int					getGradeToExec() const;

		void				setSigned(bool answer);
		void				beSigned( Bureaucrat& bureaucrat );
		virtual void		execute( Bureaucrat const & executor ) const = 0;

	private:
		AForm( void );

		std::string const	_name;
		bool				_signed;
		int const			_gradeToSign;
		int const			_gradeToExec;

};

std::ostream&	operator<<( std::ostream& os, AForm const & rhs );

#endif