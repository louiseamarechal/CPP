/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisea <louisea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:04:21 by louisea           #+#    #+#             */
/*   Updated: 2022/08/16 12:32:25 by louisea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Weapon {

	public :
		Weapon(std::string type);
		~Weapon(void);
		std::string&	getType();
		std::string		setType(std::string type);

	private :
		std::string		_type;
}
