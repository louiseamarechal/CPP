/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 14:54:47 by lmarecha          #+#    #+#             */
/*   Updated: 2022/09/30 15:00:14 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

	public :
		FragTrap( std::string name );
		FragTrap( FragTrap const & src );
		~FragTrap( void );

		FragTrap:operator=( FragTrap const & rhs ) const;

	private :
		FragTrap( void );
}

#endif