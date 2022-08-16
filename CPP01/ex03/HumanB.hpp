/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisea <louisea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:01:58 by louisea           #+#    #+#             */
/*   Updated: 2022/08/16 12:36:18 by louisea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string>
#include <iostream>

class HumanB {

	public :

		HumanB(std::string name);
		~HumanB(void);
		void		attack();
		void		setWeapon(Weapon name);

	private :

		std::string	_name;
		Weapon		_type;
};
