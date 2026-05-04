/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esergeev <esergeev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 20:00:23 by esergeev          #+#    #+#             */
/*   Updated: 2026/02/09 20:00:24 by esergeev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie* horde = zombieHorde(7, "Russkoff");
	for (int i = 0; i < 7; i++){
		horde->announce();
	}
	delete[] horde;
	return (0);
}
