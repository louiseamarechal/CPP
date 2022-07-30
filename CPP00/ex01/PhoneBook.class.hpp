/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 11:06:32 by lmarecha          #+#    #+#             */
/*   Updated: 2022/07/28 11:41:51 by louisea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

class PhoneBook {

public :

	PhoneBook( void );
	~PhoneBook( void );

private :

	std::string	_contacts[8];

};


#endif

// string (const char* s, size_t n);
// std::string s5 ("Another character sequence", 12);
