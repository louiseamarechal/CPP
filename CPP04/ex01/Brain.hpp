/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:43:30 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/04 15:05:47 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BRAIN_H
# define BRAIN_H

#include <iostream>

class Brain {

	public:
		Brain( void );
		Brain( Brain const & src );
		~Brain( void );

		Brain const	&	operator=( Brain const & rhs );

		std::string		getIdea(int index) const;
		void			setIdea(int index, std::string idea);
		void			printIdeas( void ) const;
		int				getNbIdeas( void ) const;

	private:
		std::string		_ideas[100];
		int				_nbIdeas;
};

#endif

