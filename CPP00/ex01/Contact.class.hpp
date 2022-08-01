/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisea <louisea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 18:40:18 by louisea           #+#    #+#             */
/*   Updated: 2022/08/01 11:50:36 by louisea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

class Contact {

public :

	Contact( void );
	~Contact( void );
	void		setContact(void);
	std::string	getFirstName(void);
	std::string	getLastName(void);
	std::string	getNickName(void);
	std::string	getPhoneNumber(void);
	std::string	getDarkestSecret(void);

private :

	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickName;
	std::string	_phoneNumber;
	std::string	_darkestSecret;
	void		_setFirstName(void);
	void		_setLastName(void);
	void		_setNickName(void);
	void		_setPhoneNumber(void);
	void		_setDarkestSecret(void);
};

#endif
