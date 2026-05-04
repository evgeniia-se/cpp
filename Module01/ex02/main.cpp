/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esergeev <esergeev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 20:00:44 by esergeev          #+#    #+#             */
/*   Updated: 2026/02/09 20:00:45 by esergeev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(){
	std::string var = "HI THIS IS BRAIN";
	std::string *stringPtr = &var; //pointer to var
	std::string &stringRef = var; //reference to var

	std::cout << &var << std::endl;
	std::cout << stringPtr << std::endl;
	std::cout << &stringRef << std::endl;

	std::cout << var << std::endl;
	std::cout << *stringPtr << std::endl;
	std::cout << stringRef << std::endl;
	return 0;
}
