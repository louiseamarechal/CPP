/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.utils.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 12:21:39 by lmarecha          #+#    #+#             */
/*   Updated: 2022/08/12 12:31:39 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

std::string	truncate(std::string str)
{
	if (str.length() > 10)
		str = str.substr(0, 9).insert(9, ".");
	return (str);
}
