/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:38:11 by lmarecha          #+#    #+#             */
/*   Updated: 2022/11/08 16:03:13 by lmarecha         ###   ########.fr       */
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

void    Span::addNumbers( std::vector< int >::iterator start, std::vector< int >::iterator end, int n ) {

    for (; start != end; start++)
        this->addNumber( *start + n++ );
}

int		Span::longestSpan( void ) const {

    if ( this->_N.size() <= 1 )
        throw( NotEnoughElementsException() );

    int min = *std::min_element(this->_N.begin(), this->_N.end());
    int max = *std::max_element(this->_N.begin(), this->_N.end());

    return (max - min);
}

int		Span::shortestSpan( void ) const {

	int					diff;
	unsigned long int	i;
	std::vector< int >	sortedN = this->_N;

	if ( this->_N.size() <= 1 )
		throw( NotEnoughElementsException() );

	std::sort (sortedN.begin(), sortedN.end());
	diff = sortedN[1] - sortedN[0];

	for ( i = 1; i < (sortedN.size() - 1); i++ )
	{
		if ( (sortedN[i + 1] - sortedN[i]) < diff)
			diff = sortedN[i + 1] - sortedN[i];
	}

	return (diff);
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

/************************************************/
/*                 NON-MEMBER                   */
/************************************************/

std::ostream&   operator<<( std::ostream& os, const Span& rhs )
{
    for ( unsigned int i = 0; i < rhs.getN().size(); i++ )
    {
        os << rhs.getN()[i];
        if ( i != rhs.getN().size() - 1 )
            os << " | ";
    }
    return (os);
}