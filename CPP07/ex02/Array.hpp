/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:14:07 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/27 11:26:51 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template < typename T >
class Array {

    public:
        
        class IndexException;
        
        Array< T >( void );
        Array< T >( unsigned int n );
        Array< T >( Array< T > const & src );
        
        Array< T > & operator=( Array< T > const & rhs );
        T & operator[]( int index ) const;

        ~Array( void );

        int size( void ) const;

    private:
        T*  _array;
        int _size;

};

template < typename T >
class Array< T >::IndexException : public std::exception {

    public:
        virtual const char* what() const throw();
};
    
template < typename T >
std::ostream&	operator<<( std::ostream& os, Array< T > const & rhs );

#include "Array.tpp"

#endif