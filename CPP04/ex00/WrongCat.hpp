/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:34:30 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/03 11:51:32 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WRONGCAT_H
# define WRONGCAT_H

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

	public:
		WrongCat( void );
		WrongCat(WrongCat const & src);
		~WrongCat( void );

		WrongCat const	& operator=(WrongCat const & rhs);
		void	makeSound() const;

};

#endif