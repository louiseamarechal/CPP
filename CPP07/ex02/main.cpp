/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:57:08 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/27 11:25:54 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main( void ) {

    std::cout << "----INT----" << std::endl;
    Array<int> a = Array<int>(5);
    std::cout << a << std::endl;

    std::cout << "---STRING---" << std::endl;
    Array<std::string> str = Array<std::string>(4);
    std::cout << str << std::endl;

}