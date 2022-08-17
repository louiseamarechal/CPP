/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:02:28 by lmarecha          #+#    #+#             */
/*   Updated: 2022/08/17 17:21:44 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HARL_H
# define HARL_H

#include <iostream>
#include <string>

class Harl {

	public :

		Harl( void );
		~Harl( void );

		void	complain( std::string level );

	private :

		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
};

#endif
