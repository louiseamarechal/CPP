/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:23:19 by lmarecha          #+#    #+#             */
/*   Updated: 2022/11/10 15:18:20 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span {

    public:

        class TooMuchElementsException;
        class NotEnoughElementsException;

        Span( void );
        Span( unsigned int N );
        Span( Span const & src );

        Span const  & operator=( Span const & rhs );

        ~Span( void );

        unsigned int            getMax( void ) const;
        std::vector< int >      getN( void ) const;
        void                    addNumber( int i );
        void                    addNumbers( std::vector< int >::iterator start, std::vector< int >::iterator end, int n );
        int                     shortestSpan( void ) const;
        int                     longestSpan( void ) const;

    private:
        std::vector< int >      _N;
        unsigned int            _max;

};

class Span::TooMuchElementsException : public std::exception {

    public:
        virtual const char* what() const throw() {
            return("You container is full, you can't add new elements");
        };
};

class Span::NotEnoughElementsException : public std::exception {

    public:
        virtual const char* what() const throw() {
            return("You container doesn't have enough elements to operate this function");
        };
};

std::ostream&   operator<<( std::ostream& os, const Span& rhs );

#endif
