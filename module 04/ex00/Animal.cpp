/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 18:35:39 by rchampli          #+#    #+#             */
/*   Updated: 2022/06/07 19:52:38 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("")
{
	std::cout << "Default construtor called for Animal" << std::endl;
	return;
}

Animal::Animal(Animal const &src)
{
	std::cout << "Copy construtor called for Animal" << std::endl;
	*this = src;
	return;
}

Animal::~Animal()
{
	std::cout << "Destructor called for Animal" << std::endl;
	return;
}

void Animal::makeSound(void) const
{
	std::cout << "The sound of all animal" << std::endl;
}

const std::string &Animal::getType() const
{
	return this->type;
}