/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:05:56 by lmarecha          #+#    #+#             */
/*   Updated: 2022/11/02 17:34:57 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfind.hpp"

int main( void ) {

    std::list< int >    lst(1, 5);
    std::list< int >    lst2(5, 10);

    try {
        easyfind(lst, 5);
        easyfind(lst2, 5);
    }
    catch (std::exception &e)  {
        std::cout << e.what() << std::endl;
    }
    return ( 0 );
}