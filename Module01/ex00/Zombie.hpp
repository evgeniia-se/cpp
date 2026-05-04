/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esergeev <esergeev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 20:00:18 by esergeev          #+#    #+#             */
/*   Updated: 2026/02/16 20:55:40 by esergeev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {

	private:
		std::string _name;
	public:
		Zombie(std::string str);
		~Zombie(void);

		void announce(void);

	};
		Zombie *newZombie(std::string name);
		void randomChump(std::string name);


#endif
