/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 11:06:32 by lmarecha          #+#    #+#             */
/*   Updated: 2022/08/11 16:08:59 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "Contact.class.hpp"
#include <stdlib.h>

class PhoneBook {

public :

	PhoneBook( void );
	~PhoneBook( void );
	void	addContact(void);
	void	searchContact(void);
	void	ContactDetails(int index);
	void	ContactShortList(void);

private :

	int		_contactNumber;
	Contact	_contacts[8];

};


#endif

// string (const char* s, size_t n);
// std::string s5 ("Another character sequence", 12);