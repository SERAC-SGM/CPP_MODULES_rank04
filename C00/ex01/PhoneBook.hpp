/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lletourn <lletourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:54:23 by lletourn          #+#    #+#             */
/*   Updated: 2023/08/01 14:01:58 by lletourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "Contact.hpp"

class PhoneBook
{
public:

	PhoneBook();
	~PhoneBook();
	
	void		addContact();
	void		searchContact(std::string index);
	std::string	getIndex();

private:

	Contact	_contacts[8];
	Contact _tmp;
	int		_nbContacts;
};

#endif
