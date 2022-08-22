/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisea <louisea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:04:21 by louisea           #+#    #+#             */
/*   Updated: 2022/08/18 15:49:21 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon {

	public :

							Weapon(std::string type);
							~Weapon(void);

		const std::string&	getType() const;
		void				setType(std::string type);

	private :

		std::string			_type;
};

#endif
