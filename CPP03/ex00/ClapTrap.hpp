/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:43:09 by lmarecha          #+#    #+#             */
/*   Updated: 2022/09/29 18:30:24 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CLAPTRAP_H
# define CLAPTRAP_H

class ClapTrap {

	public :
		ClapTrap( std::string name);
		// constructeur de recopie
		ClapTrap( ClapTrap const & src );
		~ClapTrap( void );

		ClapTrap &	operator=( ClapTrap const & rhs ); //canonical --> operateur egal

		void	attack( const std::string & target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );

		std::string	getName();
		int			getHitPoints();
		int			getEnergyPoints();
		int			getAttackDamage();
		
	private :

		ClapTrap( void );
		std::string	_Name;
		int			_HitPoints;
		int			_EnergyPoints;
		int`		_AttackDamage;
};

#endif