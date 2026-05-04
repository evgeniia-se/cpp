/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esergeev <esergeev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 20:00:14 by esergeev          #+#    #+#             */
/*   Updated: 2026/02/09 20:00:15 by esergeev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

	Zombie::Zombie(std::string str){
		this->_name = str;
	}

	Zombie::~Zombie(){
		std::cout << _name << ": is destroyed" << std::endl;
	}

	void Zombie::announce(void){
		std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;

	}
