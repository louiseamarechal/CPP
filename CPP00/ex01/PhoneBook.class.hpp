/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 11:06:32 by lmarecha          #+#    #+#             */
/*   Updated: 2022/08/12 12:25:46 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "Contact.class.hpp"
#include <stdlib.h>
#include <iostream>
#include <iomanip>

class PhoneBook {

public :

	PhoneBook( void );
	~PhoneBook( void );
	void	addContact(void);
	void	searchContact(void);

private :

	void	_contactDetails(int index);
	void	_contactShortList(void);
	int		_contactNumber;
	Contact	_contacts[8];

};

std::string	truncate(std::string str);

#endif
