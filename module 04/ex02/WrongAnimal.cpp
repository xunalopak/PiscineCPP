/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 20:24:32 by rchampli          #+#    #+#             */
/*   Updated: 2022/06/07 20:24:33 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	std::cout << "Copy construtor called for WrongAnimal" << std::endl;
	*this = src;
	return;
}

WrongAnimal::WrongAnimal(): type("WrongAnimal")
{
	std::cout << "Default construtor called for WrongAnimal" << std::endl;
	return;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor called for WrongAnimal" << std::endl;
	return;
}

void WrongAnimal::makeSound() const 
{
	std::cout << "The sound of all wrong animal" << std::endl;
}

const std::string &WrongAnimal::getType() const
{
	return type;
}