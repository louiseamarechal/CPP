/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:46:42 by lmarecha          #+#    #+#             */
/*   Updated: 2022/11/10 16:33:07 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Stack.hpp"

int main()
{
    MutantStack<int> mstack;

    mstack.push(5); // add 5 to the container
    mstack.push(17); // add 17 to the container
    std::cout << "mstack.push(5)" << std::endl;
    std::cout << "mstack.push(17)" << std::endl;
    std::cout << std::endl;
 
    // return pointer to the top element. This is the most recently pushed element
    std::cout << "mstack.top() : " << mstack.top() << std::endl;
 
    // Removes the top element from the stack.
    std::cout << std::endl;
    mstack.pop();
    std::cout << "mstack.pop()" << std::endl;
    std::cout << std::endl;
    
    std::cout << "mstack.top() : " << mstack.top() << std::endl;
 
    std::cout << "mstack.size() : " << mstack.size() << std::endl;
    std::cout << std::endl;
 
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    
    std::cout << "mstack.push(3)" << std::endl;
    std::cout << "mstack.push(5)" << std::endl;
    std::cout << "mstack.push(737)" << std::endl;
    std::cout << "mstack.push(0)" << std::endl;
    std::cout << std::endl;

    MutantStack< int >::iterator it = mstack.begin();
    MutantStack< int >::iterator ite = mstack.end();
 
    ++it;
 
    --it;
    while (it != ite)
    {
        std::cout << "*it = " << *it << std::endl;
        ++it;
    }
    
    std::cout << "--------------------------------" << std::endl;
    
    std::stack<int> s(mstack);
    std::cout << "std::stack<int> s(mstack)" << std::endl;
    std::cout << "s.top() : " << s.top() << std::endl;
    s.pop();
    std::cout << "s.pop()" << std::endl;
    std::cout << "s.top() : " << s.top() << std::endl;

    std::cout << "--------------------------------" << std::endl;

    MutantStack<int> mstack2;
    
    mstack2.push(3);
    mstack2.push(2);
    mstack2.push(8);
    mstack2.push(19);
    
    MutantStack< int >::const_iterator iter = mstack2.begin();
    MutantStack< int >::const_iterator itere = mstack2.end();
   
    while (iter != itere)
    {
        std::cout << "*iter = " << *iter << std::endl;
        ++iter;
    }
}