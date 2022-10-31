/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:53:58 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/31 11:28:55 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t	serialize( Data* ptr ) {

	return (reinterpret_cast< uintptr_t >(ptr));
}

Data*	deserialize( uintptr_t raw ) {

	return (reinterpret_cast< Data* >(raw));
}

// reinterpret_cast should be used very sparingly.
// It turns one type directly into another — such as casting the value from one
// pointer to another, or storing a pointer in an int

//uintptr_t is an unsigned integer type with the property that any valid pointer to void can be
//converted to this type, then converted back to pointer to void, and the result will
//compare equal to the original pointer