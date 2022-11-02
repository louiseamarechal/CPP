/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:57:08 by lmarecha          #+#    #+#             */
/*   Updated: 2022/11/02 15:43:07 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main( void ) {

    std::cout << CYAN << "----INT----" << RESET << std::endl;
    Array<int> a = Array<int>(5);
    std::cout << CYAN << a << RESET << std::endl;
    for ( int i = 0; i < a.size(); i++ )
        a[i] = i;
    std::cout << CYAN << a << RESET;
    std::cout << CYAN << "-----------" << RESET << std::endl;
    std::cout << std::endl;

    std::cout << MAGENTA << "---STRING---" << RESET << std::endl;
    Array<std::string> str = Array<std::string>(4);
    str[0] = "Hello";
    str[1] = "Bonjour";
    str[2] = "Hola";
    str[3] = "Guten Tag";
    std::cout << MAGENTA << str << RESET;
    std::cout << MAGENTA << "------------" << RESET << std::endl;
    std::cout << std::endl;

    std::cout << BLUE << "---FLOAT---" << RESET << std::endl;
    Array<float> f = Array<float>(8);
    for ( int i = 0; i < f.size(); i++)
        f[i] = 1.1f + i;
    std::cout << BLUE << f << RESET;
    std::cout << BLUE << "-----------" << RESET << std::endl;

}