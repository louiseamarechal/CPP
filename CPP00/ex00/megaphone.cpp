/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:02:19 by lmarecha          #+#    #+#             */
/*   Updated: 2022/08/11 17:04:49 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main (int argc, char **argv)
{
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
			std::cout << (char)toupper(argv[i][j]);
			j++;
		}
		i++;
	}
	std::cout << std::endl;
	return 0;
}
