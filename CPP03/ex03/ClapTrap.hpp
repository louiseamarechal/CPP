/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:43:09 by lmarecha          #+#    #+#             */
/*   Updated: 2022/09/30 15:00:57 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class ClapTrap {

	public :
		ClapTrap( void );
		ClapTrap( std::string name);
		// constructeur de recopie
		ClapTrap( ClapTrap const & src );
		~ClapTrap( void );

		ClapTrap const &	operator=( ClapTrap const & rhs ); //canonical --> operateur egal

		void	attack( const std::string & target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );

		std::string	getName() const;
		int			getHitPoints() const;
		int			getEnergyPoints() const;
		int			getAttackDamage() const;

	protected :
		std::string	name;
		int			hitPoints;
		int			energyPoints;
		int			attackDamage;
};

#endif