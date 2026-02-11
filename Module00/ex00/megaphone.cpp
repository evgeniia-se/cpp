/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esergeev <esergeev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 19:58:57 by esergeev          #+#    #+#             */
/*   Updated: 2026/02/09 21:10:45 by esergeev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}

	for (int i = 1; i < ac; i++)
	{
		for (int j = 0; av[i][j]; j++)
			std::cout << (char) std::toupper(av[i][j]);
	}
	std::cout << std::endl;
	return 0;
}
