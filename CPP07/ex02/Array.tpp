/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:35:03 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/26 18:08:16 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ARRAY_TPP
# define ARRAY_TPP

template< typename T >
Array< T >::Array( void ) : _array(new T[0]), _size(0) {}

template< typename T >
Array< T >::Array( unsigned int n ) : _arrays(new T[n]), _size(n) {}

template< typename T >
Array< T >::Array( Array< T > const & rhs ) : _array(new T[rhs.size()]) {

    *this = src;
}

template< typename T >
Array< T >::~Array( void ) {

    delete [] array;
    return;
}

template< typename T >
Array< T > const & Array< T >::operator=( Array< T > const & rhs ) {

    if (this != &rhs)
    {
        for (int i = 0; i < this.size(); i++)
            this->_array[i] = rhs->_array[i];
    }

    return (*this);
}

template< typename T >
Array< T >&    Array< T >::operator[]( int index ) {

    if ( index < 0 || index > this->size() )
        throw(IndexException());
    else
        return (this->_array[index]);
}

template< typename T >
std::ostream&	operator<<( std::ostream& os, Array< T > const & rhs ) {

    for (int i = 0; i < rhs.size(); i++)
    {
        try {
            std::cout << this->_array[i] << std::endl;
        }
        catch (std::exception& e) {
            std::cout << e.what() << std::endl;
        }
    }
}

template< typename T >
int Array< T >::size( void ) const {
      
    return (this->_size);
}

template< typename T >
const char* Array< T >::IndexException::what() const throw() {
     
     return("This index is not reachable");
}

#endif
