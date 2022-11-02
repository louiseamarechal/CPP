/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:56:02 by lmarecha          #+#    #+#             */
/*   Updated: 2022/11/02 17:35:30 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template < typename T >
void    easyfind( T a, int i ) {

    typename T::iterator         it = a.begin();
    typename T::const_iterator   ite = a.end();

    for ( ; it != ite; it++ ) {

        if ( *it == i )
        {
            std::cout << *it << " = " << i << std::endl;
            return ;
        }
        else
            throw( NoMatchException() );
    }
}