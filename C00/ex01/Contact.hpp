/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lletourn <lletourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:55:05 by lletourn          #+#    #+#             */
/*   Updated: 2023/09/03 12:07:03 by lletourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Contact
{
public:

	Contact();
	~Contact();
	int			getFirstName();
	int			getLastName();
	int			getNickname();
	int			getNumber();
	int			getDarkestSecret();
	int			checkContact() const;
	void		printContact();
	void		copyContact(Contact contact);

private:

	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _number;
	std::string _darkestSecret;
};

#endif
