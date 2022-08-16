/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisea <louisea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:01:58 by louisea           #+#    #+#             */
/*   Updated: 2022/08/16 17:28:23 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANB_H
# define HUMANB_H

#include <iostream>
#include "Weapon.hpp"

class HumanB {

	public :

		HumanB(std::string name);
		~HumanB(void);
		void		attack();
		// void		getName();
		void		setWeapon(Weapon& type);

	private :

		std::string	_name;
		Weapon*		_type;
};

#endif
