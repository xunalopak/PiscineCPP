/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 19:00:59 by rchampli          #+#    #+#             */
/*   Updated: 2022/06/08 15:55:38 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	brain = new Brain() ;
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
	delete brain;
	return;
}

Brain *Cat::getBrain() const
{
	return brain;
}

Cat		&Cat::operator=( Cat const &other )
{
	std::cout << "Assignement operator for Cat" << std::endl;
	type = other.getType();
	*brain = *other.getBrain();
	return *this;
}

Animal	&Cat::operator=( Animal const &other )
{
	std::cout << "Assignement operator for Cat by Animal" << std::endl;
	type = other.getType();
	*brain = *other.getBrain();
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "MIAWW !" << std::endl;
}