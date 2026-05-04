/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esergeev <esergeev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 20:01:10 by esergeev          #+#    #+#             */
/*   Updated: 2026/02/11 18:02:58 by esergeev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str){
		this->_type = str;
}

Weapon::~Weapon(){};

const std::string& Weapon::getType(void) const{
	return(this->_type);
}

void Weapon::setType(const std::string& value){
	this->_type = value;
}




