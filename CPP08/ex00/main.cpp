/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:05:56 by lmarecha          #+#    #+#             */
/*   Updated: 2022/11/10 16:06:38 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfind.hpp"

int main( void ) {

    std::list< int >    lst(1, 5);
    std::list< int >    lst2(5, 10);

    try {
        std::cout << *easyFind(lst, 5) << std::endl;
        std::cout << *easyFind(lst2, 5) << std::endl;
    }
    catch (std::exception &e)  {
        std::cout << e.what() << std::endl;
    }
    return ( 0 );
}