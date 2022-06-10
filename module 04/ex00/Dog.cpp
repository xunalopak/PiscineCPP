/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 19:04:25 by rchampli          #+#    #+#             */
/*   Updated: 2022/06/07 19:52:09 by rchampli         ###   ########.fr       */
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
	std::cout << "Default construtor called for Dog" << std::endl;
	return;
}

Dog::~Dog()
{
	std::cout << "Destructor called for Dog" << std::endl;
	return;
}

void Dog::makeSound() const
{
	std::cout << "WAF !" << std::endl;
}