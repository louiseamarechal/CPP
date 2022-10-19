/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:07:13 by lmarecha          #+#    #+#             */
/*   Updated: 2022/10/19 18:02:52 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base *	generate( void ) {

	srand(time(NULL));
	long int	generator = rand();

	if ( generator % 3 == 0 )
	{
		Base* a = new A();
		return (a);
	}
	else if ( generator % 3 == 1 )
	{
		Base* b = new B();
		return (b);
	}

	Base* c = new C();

	return (c);
}

void	identify( Base * p ) {

	A* a = dynamic_cast< A* >(p);
	B* b = dynamic_cast< B* >(p);
	C* c = dynamic_cast< C* >(p);

	if ( a != NULL )
		std::cout << "Ptr P is of type A" << std::endl;
	else if ( b != NULL )
		std::cout << "Ptr P is of type B" << std::endl;
	else if ( c != NULL )
		std::cout << "Ptr P is of type C" << std::endl;
}

void	identify( Base& p ) {

	try {
		A& a = dynamic_cast< A& >(p);
		(void)a;
		std::cout << "Ref P is of type A" << std::endl;
	}
	catch (std::exception& e) {
		// std::cout << e.what() << std::endl;
	}

	try {
		B& b = dynamic_cast< B& >(p);
		(void)b;
		std::cout << "Ref P is of type B" << std::endl;
	}
	catch (std::exception& e) {
		// std::cout << e.what() << std::endl;
	}

	try {
		C& c = dynamic_cast< C& >(p);
		(void)c;
		std::cout << "Ref P is of type C" << std::endl;
	}
	catch (std::exception& e) {
		// std::cout << e.what() << std::endl;
	}
}

int	main( void ) {

	Base *	base = generate();

	identify(base);
	identify(*base);

	delete base;

}