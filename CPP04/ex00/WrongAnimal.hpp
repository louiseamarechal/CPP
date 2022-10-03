/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:28:17 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/03 12:20:35 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

#include <iostream>

class WrongAnimal {

	public:
		WrongAnimal( void );
		WrongAnimal( WrongAnimal const & src);
		virtual ~WrongAnimal( void );

		WrongAnimal const	& operator=(WrongAnimal const & rhs);

		std::string		getType() const;
		void	makeSound() const;

	protected:
		std::string	type;
};

#endif