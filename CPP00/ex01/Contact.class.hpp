/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisea <louisea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 18:40:18 by louisea           #+#    #+#             */
/*   Updated: 2022/08/02 12:57:04 by louisea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <string>
#include <cstring>
#include <iostream>

class Contact {

public :

	Contact( void );
	~Contact( void );
	std::string	getFirstName(void);
	std::string	getLastName(void);
	std::string	getNickName(void);
	std::string	getPhoneNumber(void);
	std::string	getDarkestSecret(void);
	void		setFirstName(void);
	void		setLastName(void);
	void		setNickName(void);
	void		setPhoneNumber(void);
	void		setDarkestSecret(void);

private :

	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickName;
	std::string	_phoneNumber;
	std::string	_darkestSecret;
};

#endif
