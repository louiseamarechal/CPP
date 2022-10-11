/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:34:30 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/11 14:36:24 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CAT_H
# define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

	public:
		Cat( void );
		Cat(Cat const & src);
		~Cat( void );

		Cat const	& operator=(Cat const & rhs);
		void		makeSound() const;
		void		printIdeas( void ) const;
		void		setIdea( int index, std::string idea );
		Brain*		getBrain( void ) const;

	private:
		Brain		*_brain;
};

#endif