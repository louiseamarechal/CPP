/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:28:17 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/04 12:54:43 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>

class AAnimal {

	public:
		AAnimal( void );
		AAnimal( AAnimal const & src);
		virtual ~AAnimal( void );

		AAnimal const	& operator=(AAnimal const & rhs);

		std::string		getType() const;
		virtual void	makeSound() const = 0;

	protected:
		std::string	type;
};

#endif