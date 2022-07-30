/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisea <louisea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 18:40:18 by louisea           #+#    #+#             */
/*   Updated: 2022/07/28 12:29:18 by louisea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

class Contact {

public :

	Contact( void );
	~Contact( void );

private :

	void		_setContact(void);
	void		_setFirstName(void);
	void		_setLastName(void);
	void		_setNickName(void);
	void		_setPhoneNumber(void);
	void		_setDarkestSecret(void);
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickName;
	std::string	_phoneNumber;
	std::string	_darkestSecret;
}

#endif
