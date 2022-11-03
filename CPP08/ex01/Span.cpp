/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:38:11 by lmarecha          #+#    #+#             */
/*   Updated: 2022/11/03 18:30:00 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/************************************************/
/*                  CANONICAL FORM              */
/************************************************/

Span::Span( void ) : _N(), _max(0) {

    return;
}

Span::Span( unsigned int N ) : _N(), _max(N) {

    return;
}

Span::Span( Span const & src ) {

    *this = src;

    return;
}

Span const &    Span::operator=( Span const & rhs ) {

    if ( this != &rhs )
    {
        this->_max = rhs.getMax();
        this->_N = rhs.getN();
    }

    return (*this);
}

Span::~Span( void ) {

    return;
}


/*************************************************/
/*              CLASS FUNCTIONS                  */
/*************************************************/

void    Span::addNumber( int i ) {

    if ( this->_N.size() >= this->_max )
        throw( TooMuchElementsException() );
    else
        this->_N.push_back(i);
}


int     Span::longestSpan( void ) const {

    if ( this->_N.size() <= 1 )
        throw( NotEnoughElementsException() );
        
    int min = *std::min_element(this->_N.begin(), this->_N.end());
    int max = *std::max_element(this->_N.begin(), this->_N.end());

    return (max - min);
}



/************************************************/
/*                  GETTERS                     */
/************************************************/
std::vector< int >    Span::getN( void ) const {

    return (this->_N);
}

unsigned int    Span::getMax( void ) const {

    return (this->_max);
}