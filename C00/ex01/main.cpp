/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lletourn <lletourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:06:53 by lletourn          #+#    #+#             */
/*   Updated: 2023/09/03 12:11:44 by lletourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int main(void)
{
	std::string command;
	PhoneBook phonebook;

	std::cout << "Enter a command (ADD, SEARCH or EXIT) : ";
	while (std::getline(std::cin, command))
	{
		if (command == "ADD")
			phonebook.addContact();
		else if (command == "SEARCH")
			phonebook.searchContact(phonebook.getIndex());
		else if (command == "EXIT")
			return (0);
		else
			std::cout << "Wrong command" << std::endl;
		if (!std::cin.eof())
			std::cout << "Enter a command (ADD, SEARCH or EXIT) : ";
	}
	if (std::cin.eof())
		std::cout << "EOF detected, exiting" << std::endl;
	return (0);
}
