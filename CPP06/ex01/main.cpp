/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:25:39 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/19 16:40:36 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int	main( void ) {

	Data*		data = new Data;
	uintptr_t	UintData = serialize(data);

	std::cout << "Data : " << data << std::endl;
	std::cout << "Serialized Data UintData : " << UintData << std::endl;
	std::cout << "Deserialized UintData : " << deserialize(UintData) << std::endl;

	delete data;

	return (0);
}