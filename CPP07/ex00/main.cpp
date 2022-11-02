/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 15:20:48 by lmarecha          #+#    #+#             */
/*   Updated: 2022/11/02 12:19:34 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Whatever.hpp"

template< typename T >
void    swap( T *a, T *b ) {

    T c;

    c = *a;
    *a = *b;
    *b = c;
}

template< typename T >
T const &   mymin( T const & x, T const & y ) {

    return ( (x < y) ? x : y );
}

template< typename T >
T const &   mymax( T const & x, T const & y ) {

    return ( (x > y) ? x : y );
}

int main( void ) {

    int     x = 20;
    int     y = 40;

    char    c = 'c';
    char    b = 'b';

    std::string salut = "salut";
    std::string bonjour = "bonjour";

    std::cout << MAGENTA << "-------------------" << RESET << std::endl;
    std::cout << MAGENTA << "        INT        " << RESET << std::endl;
    std::cout << MAGENTA << "-------------------" << RESET << std::endl;
    std::cout<< "x = " << x << std::endl;
    std::cout<< "y = " << y << std::endl;

    swap(&x, &y);

    std::cout << std::endl;
    std::cout << BOLDBLUE << "SWAP :" << RESET << std::endl;
    std::cout<< "x = " << x << std::endl;
    std::cout<< "y = " << y << std::endl;

    std::cout << std::endl;
    std::cout << BOLDBLUE << "MIN/MAX :" << RESET << std::endl;
    std::cout<< "Min = " << mymin(x, y) << std::endl;
    std::cout << "Max = " << mymax(x, y) << std::endl;
    std::cout << MAGENTA << "-------------------" << RESET << std::endl;

    std::cout << MAGENTA << "-------------------" << RESET << std::endl;
    std::cout << MAGENTA << "        CHAR        " << RESET << std::endl;
    std::cout << MAGENTA << "-------------------" << RESET << std::endl;
    std::cout<< "c = " << c << std::endl;
    std::cout<< "b = " << b << std::endl;

    swap(&c, &b);

    std::cout << std::endl;
    std::cout << BOLDBLUE << "SWAP :" << RESET << std::endl;
    std::cout<< "c = " << c << std::endl;
    std::cout<< "b = " << b << std::endl;

    std::cout << std::endl;
    std::cout << BOLDBLUE << "MIN/MAX :" << RESET << std::endl;
    std::cout<< "Min = " << mymin(c, b) << std::endl;
    std::cout << "Max = " << mymax(c, b) << std::endl;
    std::cout << MAGENTA << "-------------------" << RESET << std::endl;

    std::cout << MAGENTA << "-------------------" << RESET << std::endl;
    std::cout << MAGENTA << "        STRING     " << RESET << std::endl;
    std::cout << MAGENTA << "-------------------" << RESET << std::endl;
    std::cout<< "salut = " << salut << std::endl;
    std::cout<< "bonjour = " << bonjour << std::endl;

    swap(&salut, &bonjour);

    std::cout << std::endl;
    std::cout << BOLDBLUE << "SWAP :" << RESET << std::endl;
    std::cout<< "salut = " << salut << std::endl;
    std::cout<< "bonjour = " << bonjour << std::endl;

    std::cout << std::endl;
    std::cout << BOLDBLUE << "MIN/MAX :" << RESET << std::endl;
    std::cout<< "Min = " << mymin<std::string>(salut, bonjour) << std::endl;
    std::cout << "Max = " << mymax<std::string>(salut, bonjour) << std::endl;
    std::cout << MAGENTA << "-------------------" << RESET << std::endl;

    return (0);
}
