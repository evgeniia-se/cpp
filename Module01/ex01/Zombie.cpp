/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esergeev <esergeev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 20:00:32 by esergeev          #+#    #+#             */
/*   Updated: 2026/02/09 20:00:33 by esergeev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

	Zombie::Zombie(){
	};

	Zombie::~Zombie(){
		std::cout << _name << ": is destroyed" << std::endl;
	}

	void Zombie::announce(void){
		std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;

	}

	void Zombie::setName(std::string name){
		this->_name = name;
	}
