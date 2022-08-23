/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 12:50:25 by lmarecha          #+#    #+#             */
/*   Updated: 2022/08/23 17:22:46 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_H
# define FIXED_H

class Fixed {

	public :

		Fixed( void ); // constructeur par defaut
		Fixed( Fixed const & src ); // constructeur de recopie
		~Fixed( void ); // destructeur

		Fixed&	operator=( Fixed const & rhs ); // surcharge de l'operateur d'affectation

		int		getRawBits( void ) const; // retourne la valeur du nombre a virgule fixe sans la convertir
		void	setRawBits( int const raw ); // initialise la valeur du nb a virgule avec celle passee en parametre

	private :

		int			_fixed; // valeur du nombre en virgule fixe
		int const	_bits;
	// Un entier constant statiquepour stocker le nombre de bits de la partiefractionnaire, et dont la valeur sera toujours le littéral entier8
};

#endif
