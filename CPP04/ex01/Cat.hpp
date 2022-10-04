/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:34:30 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/04 15:05:04 by lmarecha         ###   ########.fr       */
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
		// std::string	getCatBrainIdea(int index) const;
		void			printIdeas( void ) const;

	private:
		Brain		*_brain;
};

#endif