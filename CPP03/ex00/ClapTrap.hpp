/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:43:09 by lmarecha          #+#    #+#             */
/*   Updated: 2022/09/30 11:20:06 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class ClapTrap {

	public :
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

	private :

		ClapTrap( void );
		std::string	_Name;
		int			_HitPoints;
		int			_EnergyPoints;
		int			_AttackDamage;
};

#endif