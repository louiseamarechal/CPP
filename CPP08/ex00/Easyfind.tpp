/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:56:02 by lmarecha          #+#    #+#             */
/*   Updated: 2022/11/10 16:06:02 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template < typename T >
typename T::const_iterator    easyFind( T a, int i ) {

    typename T::const_iterator  it = a.begin();
    typename T::const_iterator  ite = a.end();

    it = find(it, ite, i);
    if ( it == ite )
        throw( NoMatchException() );
    return ( it );
}