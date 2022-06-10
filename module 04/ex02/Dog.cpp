/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 19:04:25 by rchampli          #+#    #+#             */
/*   Updated: 2022/06/08 15:56:53 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(Dog const &src): Animal()
{
	std::cout << "Copy construtor called for Dog" << std::endl;
	*this = src;
	return;
}

Dog::Dog()
{
	this->type = "Dog";
	brain = new Brain();
	std::cout << "Default construtor called for Dog" << std::endl;
	return;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Destructor called for Dog" << std::endl;
	return;
}

Brain	*Dog::getBrain() const
{
	return brain;
}

Dog &Dog::operator=(Dog const &other)
{
	std::cout << "Assignement operator for Dog" << std::endl;
	type = other.getType();
	*brain = *other.getBrain();
	return *this;
}

Animal &Dog::operator=(Animal const &other)
{
	std::cout << "Assignement operator for Dog by Animal" << std::endl;
	type = other.getType();
	*brain = *other.getBrain();
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "WAF !" << std::endl;
}