/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:14:07 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/27 15:06:12 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

#define RESET       "\033[0m"
#define CYAN        "\033[36m"
#define YELLOW      "\033[33m"
#define BLUE        "\033[34m"
#define BOLDWHITE   "\033[1m\033[37m"
#define BOLDVIOLET  "\033[1m\033[35m"
#define BOLDBLUE    "\033[1m\033[34m"
#define MAGENTA     "\033[35m"
#define BOLDYELLOW  "\033[1m\033[33m"     

template < typename T >
class Array {

    public:
        
        class IndexException;
        
        Array< T >( void );
        Array< T >( unsigned int n );
        Array< T >( Array< T > const & src );
        
        Array< T > & operator=( Array< T > const & rhs );
        const T & operator[]( int index ) const;
        T & operator[]( int index );

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