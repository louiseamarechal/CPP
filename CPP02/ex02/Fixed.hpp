/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 12:50:25 by lmarecha          #+#    #+#             */
/*   Updated: 2022/09/29 16:49:43 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <math.h>

class Fixed {

	public :

		Fixed( void );
		// constructeur qui convertit const int/float en virgule fixe
		Fixed( const int src );
		Fixed( const float src );
		// constructeur de recopie
		Fixed( Fixed const & src );
		~Fixed( void );

		// surcharge de l'operateur d'affectation
		Fixed	&operator=( Fixed const & rhs );

		// operateurs de comparaison
		bool	operator>( Fixed const & rhs );
		bool	operator<( Fixed const & rhs );
		bool	operator<=( Fixed const & rhs );
		bool	operator>=( Fixed const & rhs );
		bool	operator==( Fixed const & rhs );
		bool	operator!=( Fixed const & rhs );

		// operateurs arithmetiques
		Fixed	operator+( Fixed const & rhs );
		Fixed	operator-( Fixed const & rhs );
		Fixed	operator*( Fixed const & rhs );
		Fixed	operator/( Fixed const & rhs );

		// operateur pre incrementation / pre decrementation
		Fixed	&operator++();
		Fixed	&operator--();

		// operateur post incrementation / post decrementation
		Fixed	operator++(int);
		Fixed	operator--(int);

		// converti la valeur en virgule fixe en nb a virgule flottante / en nombre entier
		float	toFloat( void ) const;
		int		toInt( void ) const;

		// retourne la valeur du nombre a virgule fixe sans la convertir
		int		getRawBits( void ) const;

		// initialise la valeur du nb a virgule avec celle passee en parametre
		void	setRawBits( int const raw );

		static Fixed		&min( Fixed & nb1, Fixed & nb2);
		static Fixed const	&min( Fixed & nb1 const, Fixed & nb2 const);
		static Fixed		&max( Fixed & nb1, Fixed & nb2);
		static Fixed const	&max( Fixed & nb1 const, Fixed & nb2 const);

	private :
		// valeur du nombre en virgule fixe
		int					_rawBits;
		// entier constant statique pour stocker le nombre de bits de la partiefractionnaire, et dont la valeur sera toujours le littéral entier 8
		static int const	_fractionalPos;
};

// insère une représentation en virgule flottante du nombre à virgule fixe dans le flux de sortie (objet output stream)passé en paramètre.
std::ostream&	operator<<( std::ostream& os, Fixed const & rhs );

#endif
