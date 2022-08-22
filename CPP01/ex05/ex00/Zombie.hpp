/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:43:24 by lmarecha          #+#    #+#             */
/*   Updated: 2022/08/18 14:58:32 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <new>

class Zombie {

	public :

					Zombie(std::string name);
					~Zombie(void);
		void		announce(void) const;

	private :

		std::string	_name;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);
