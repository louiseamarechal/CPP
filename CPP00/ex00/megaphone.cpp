/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:02:19 by lmarecha          #+#    #+#             */
/*   Updated: 2022/07/20 10:37:48 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <locale>
#include <iostream>

int main (int argc, char **argv)
{
	std::locale	loc;
	int			j;
	int			i;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			std::cout << std::toupper(argv[i][j],loc);
			j++;
		}
		i++;
	}
	std::cout << std::endl;
	return 0;
}
