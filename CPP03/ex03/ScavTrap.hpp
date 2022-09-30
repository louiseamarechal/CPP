/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:39:12 by lmarecha          #+#    #+#             */
/*   Updated: 2022/09/30 14:43:41 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

	public :
		ScavTrap( std::string name);
		// constructeur de recopie
		ScavTrap( ScavTrap const & src );
		~ScavTrap( void );

		ScavTrap const &	operator=( ScavTrap const & rhs ); //canonical --> operateur egal

		void	attack( const std::string & target );
		void	guardGate();

	private :
		ScavTrap( void );

};

#endif
