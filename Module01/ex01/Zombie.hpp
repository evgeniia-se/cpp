/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esergeev <esergeev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 20:00:35 by esergeev          #+#    #+#             */
/*   Updated: 2026/02/09 20:00:36 by esergeev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {

	private:
		std::string _name;
	public:
		Zombie();
		~Zombie(void);

		void announce(void);
		void setName(std::string name);
	};

Zombie* zombieHorde( int N, std::string name );

#endif
