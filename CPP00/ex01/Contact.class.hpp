/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisea <louisea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 18:40:18 by louisea           #+#    #+#             */
/*   Updated: 2022/08/11 16:22:11 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <string>
#include <cstring>
#include <iostream>
#include <stdlib.h>

class Contact {

public :

	Contact( void );
	~Contact( void );
	std::string	getFirstName(void) const;
	std::string	getLastName(void) const;
	std::string	getNickName(void) const;
	std::string	getPhoneNumber(void) const;
	std::string	getDarkestSecret(void) const;
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
