/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 15:20:48 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/21 16:58:33 by lmarecha         ###   ########.fr       */
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
T const &   min( T const & x, T const & y ) {

    return ( (x < y) ? x : y );
}

template< typename T >
T const &   max( T const & x, T const & y ) {

    return ( (x > y) ? x : y );
}

int main( void ) {


    int     x = 20;
    int     y = 40;

    char    c = 'c';
    char    b = 'b';

    std::string s = "salut";
    std::string s2 = "bonjour";

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
    std::cout<< "Min = " << min(x, y) << std::endl;
    std::cout << "Max = " << max(x, y) << std::endl;
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
    std::cout<< "Min = " << min(c, b) << std::endl;
    std::cout << "Max = " << max(c, b) << std::endl;
    std::cout << MAGENTA << "-------------------" << RESET << std::endl;

    std::cout << MAGENTA << "-------------------" << RESET << std::endl;
    std::cout << MAGENTA << "        STRING     " << RESET << std::endl;
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
    std::cout<< "Min = " << min(c, b) << std::endl;
    std::cout << "Max = " << max(c, b) << std::endl;
    std::cout << MAGENTA << "-------------------" << RESET << std::endl;


    

    return (0);
}