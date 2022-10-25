/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:14:07 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/25 18:23:52 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

class Array {

    public:
        Array( void );
        Array( unsigned int n );
        Array( Array const & src );
        
        Array const & operator=(Array const & rhs);
        
        ~Array( void );

};

#endif