/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:34:30 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/03 11:56:12 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef DOG_H
# define DOG_H

#include "Animal.hpp"

class Dog : public Animal {

	public:
		Dog( void );
		Dog(Dog const & src);
		~Dog( void );

		Dog const	& operator=(Dog const & rhs);
		void	makeSound() const;
};

#endif