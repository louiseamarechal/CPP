/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisea <louisea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:04:21 by louisea           #+#    #+#             */
/*   Updated: 2022/08/16 15:04:28 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon {

	public :
		Weapon(std::string type);
		~Weapon(void);
		std::string&	getType();
		void			setType(std::string type);

	private :
		std::string		_type;
};

#endif
