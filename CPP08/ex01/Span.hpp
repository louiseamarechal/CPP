/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:23:19 by lmarecha          #+#    #+#             */
/*   Updated: 2022/11/04 16:25:10 by louisea          ###   ########.fr       */
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

        Span( unsigned int N );
        Span( Span const & src );

        Span const  & operator=( Span const & rhs );

        ~Span( void );

        unsigned int            getMax( void ) const;
        std::vector< int >      getN( void ) const;
        void                    addNumber( int i );
        int                     shortestSpan( void ) const;
        int                     longestSpan( void ) const;

    private:
        Span( void );
        std::vector< int >      _N;
        unsigned int            _max;

};

class Span::TooMuchElementsException : public std::exception {

    public:
        virtual const char* what() const throw() {
            return("You container is full, you can't add anymore elements");
        };
};

class Span::NotEnoughElementsException : public std::exception {

    public:
        virtual const char* what() const throw() {
            return("You container doesn't have enough elements to operate this function");
        };
};

#endif
