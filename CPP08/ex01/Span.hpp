/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:23:19 by lmarecha          #+#    #+#             */
/*   Updated: 2022/11/03 18:29:16 by lmarecha         ###   ########.fr       */
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
            std::cout << "You container is full, you can't add anymore elements" << std::endl;
        };
};

class Span::NotEnoughElementsException : public std::exception {

    public:
        virtual const char* what() const throw() {
            std::cout << "You container doesn't have enough elements to operate this function" << std::endl;
        };
};

#endif