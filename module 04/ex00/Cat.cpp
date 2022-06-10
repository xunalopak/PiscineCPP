/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 19:00:59 by rchampli          #+#    #+#             */
/*   Updated: 2022/06/07 19:51:46 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Default construtor called for Cat" << std::endl;
	return;
}

Cat::Cat(Cat const &src) : Animal()
{
	std::cout << "Copy construtor called for Cat" << std::endl;
	*this = src;
	return;
}

Cat::~Cat()
{
	std::cout << "Destructor called for Cat" << std::endl;
	return;
}

void Cat::makeSound() const
{
	std::cout << "MIAWW !" << std::endl;
}