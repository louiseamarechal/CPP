/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:22:15 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/06 16:57:04 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FORM_HPP
# define FORM_HPP

// #include "Bureaucrat.hpp"
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

	public:
		class GradeTooHighException : public std::exception {

			public:
				virtual const char *what() const throw() {
					return("Requested grade to sign this form is too high!");
				}
		};

		class GradeTooLowException : public std::exception {

			public:
				virtual const char *what() const throw() {
					return("Requested grade to sign this form is too low!");
				}
		};

		Form( std::string name, bool sign, int gradeToSign, int gradeToExec);
		Form( Form const & src );
		~Form( void );

		Form&	operator=( Form const & rhs );

		std::string const	getName() const;
		bool				getSigned() const;
		int					getGradeToSign() const;
		int					getGradeToExec() const;

		void				beSigned( Bureaucrat& bureaucrat );

	private:
		Form( void );

		std::string const	_name;
		bool				_signed;
		int const			_gradeToSign;
		int const			_gradeToExec;

};

std::ostream&	operator<<( std::ostream& os, Form const & rhs );

#endif