/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Stack.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:10:57 by lmarecha          #+#    #+#             */
/*   Updated: 2022/11/09 18:04:35 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template < typename T >
MutantStack< T >::MutantStack( void ) { 
    
    return; 
}

template < typename T >
MutantStack< T >::MutantStack( MutantStack< T > const & src ) {

    *this = src;
}

template < typename T >
MutantStack< T > & MutantStack< T >::operator=( MutantStack< T > const & rhs ) {

    if ( this != &rhs )
        this->c = rhs.c;

    return (*this);
}

template < typename T >
typename std::stack< T >::container_type::iterator   MutantStack< T >::begin( void ) {

    return (this->c.begin());
}

template < typename T >
typename std::stack< T >::container_type::iterator   MutantStack< T >::end( void ) {

   return (this->c.end());
}


template < typename T >
MutantStack< T >::~MutantStack( void ) { 

    return;
}