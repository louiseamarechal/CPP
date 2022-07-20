/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisea <louisea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 18:40:18 by louisea           #+#    #+#             */
/*   Updated: 2022/07/20 18:47:12 by louisea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

class Contact {

public :

	Contact( void );
	~Contact( void );

private :

	char	*first_name;
	char	*last_name;
	char	*nickname;
	char	*phone_number;
	char	*darkest_secret;
}

#endif
