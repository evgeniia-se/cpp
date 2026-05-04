/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esergeev <esergeev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 20:00:56 by esergeev          #+#    #+#             */
/*   Updated: 2026/02/11 17:55:23 by esergeev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack() const{
	std::string type = arm->getType();
	std::cout << name << " attacks with their " << type << std::endl;
}


HumanB::HumanB(std::string nameB){
	this->name = nameB;
	this->arm = NULL;
}

void HumanB::setWeapon(Weapon& value){
	this->arm = &value;
}
