/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:45:53 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/19 17:37:51 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

class Base {

	public:
		virtual ~Base( void );
};

class A : public Base {

};

class B : public Base {

};

class C : public Base {

};

#endif