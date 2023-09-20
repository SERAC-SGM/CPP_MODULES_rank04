/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lletourn <lletourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:58:17 by lletourn          #+#    #+#             */
/*   Updated: 2023/09/03 12:08:48 by lletourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->_nbContacts = -1;
}

PhoneBook::~PhoneBook()
{}
void PhoneBook::addContact()
{
	while (1)
	{
		if (!this->_tmp.getFirstName())
			break;
		if (!this->_tmp.getLastName())
			break;
		if (!this->_tmp.getNickname())
			break;
		if (!this->_tmp.getNumber())
			break;
		this->_tmp.getDarkestSecret();
		break;
	}
	if (!this->_tmp.checkContact())
	{
		std::cout << "Contact not added" << std::endl << std::endl;
		return ;
	}
	this->_nbContacts = (this->_nbContacts + 1) % 8;
	this->_contacts[this->_nbContacts].copyContact(this->_tmp);
}

void PhoneBook::searchContact(std::string index)
{
	if (index.empty())
	{
		std::cout << std::endl << "No index provided" << std::endl << std::endl;
		return;
	}
	if (index != "ALL" and std::atoi(index.c_str()) > this->_nbContacts)
	{
		std::cout << std::endl << "Index outside range" << std::endl << std::endl;
		return;
	}
	if (index != "ALL" and std::atoi(index.c_str()) < 0)
	{
		std::cout << std::endl << "Index can't be negative" << std::endl << std::endl;
		return;
	}
	std::cout << std::endl;
	std::cout << std::setw(10) << "index" << "|" << std::setw(10) << "first name" << "|" << std::setw(10) << "last name" << "|" << std::setw(10) << "nickname" << std::endl;
	std::cout << "     --------------------------------------" << std::endl;
	if (index == "ALL")
	{
		int i = -1;
		while (++i < 8)
		{
			std::cout << std::setw(10) << i << "|";
			this->_contacts[i].printContact();
		}
		return;
	}
	std::cout << std::setw(10) << index << "|";
	this->_contacts[std::atoi(index.c_str())].printContact();
	return;
}

std::string PhoneBook::getIndex()
{
	std::string index;

	std::cout << "Enter index : ";
	std::getline(std::cin, index);
	return (index);
}
