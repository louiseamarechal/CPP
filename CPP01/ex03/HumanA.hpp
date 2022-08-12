/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 15:16:29 by lmarecha          #+#    #+#             */
/*   Updated: 2022/08/12 15:23:27 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Class HumanA {

	public:

		HumanA(std::string name, Weapon& type);
		~HumanA(void);

	private:

		std::string _name;
		
}
