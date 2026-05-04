/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esergeev <esergeev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 20:00:51 by esergeev          #+#    #+#             */
/*   Updated: 2026/02/11 17:56:40 by esergeev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack() const{
	std::string type = arm.getType();
	std::cout << name << " attacks with their " << type << std::endl;
}

	HumanA::HumanA(std::string nameA, Weapon& armA) : name(nameA), arm(armA)
{
}
