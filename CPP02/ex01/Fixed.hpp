/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 12:50:25 by lmarecha          #+#    #+#             */
/*   Updated: 2022/09/28 12:50:09 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed {

	public :

		Fixed( void ); // constructeur par defaut
		Fixed( const int src ); // constructeur qui convertit const int en virgule fixe
		Fixed( const float src ); // constructeur qui convertit const float en virgule fixe
		Fixed( Fixed const & src ); // constructeur de recopie
		~Fixed( void ); // destructeur

		Fixed&	operator=( Fixed const & rhs ); // surcharge de l'operateur d'affectation

		float	toFloat( void ) const; // converti la valeur en virgule fixe en nobre a virgule flottante
		int		toInt( void ) const; // converi la valeur en virgule fixe en nombre entier
		int		getRawBits( void ) const; // retourne la valeur du nombre a virgule fixe sans la convertir
		void	setRawBits( int const raw ); // initialise la valeur du nb a virgule avec celle passee en parametre

	private :

		int					_rawBits; // valeur du nombre en virgule fixe
		static int const	_fractionalPos; // commun a toutes les instances de la classe
	// Un entier constant statiquepour stocker le nombre de bits de la partiefractionnaire, et dont la valeur sera toujours le littéral entier8
};

std::ostream&	operator<<(std::ostream& os, Fixed const & rhs); // insère une représentation en virgule flottante du nombre à virgule fixe dans le flux de sortie (objet output stream)passé en paramètre.

#endif
