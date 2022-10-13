/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:09:26 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/13 16:11:58 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>

class Convert {

	public:
		Convert( void );
		Convert( Convert const & src );
		~Convert( void );

		Convert &	operator=( Convert const & rhs );
}

#endif