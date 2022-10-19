/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:54:08 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/19 16:38:56 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "stdint.h"

struct Data {

	char	c;
	int		i;
	float	f;
};

uintptr_t	serialize( Data* ptr );
Data*		deserialize( uintptr_t raw );