/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lletourn <lletourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 13:41:27 by lletourn          #+#    #+#             */
/*   Updated: 2023/07/25 15:48:25 by lletourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int i = 0;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (av[++i])
	{
		int j = -1;
		while (av[i][++j] != '\0')
			std::cout << (char)std::toupper(av[i][j]);
	}
	std::cout << std::endl;
	return (0);
}
