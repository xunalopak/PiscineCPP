/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 20:24:26 by rchampli          #+#    #+#             */
/*   Updated: 2022/06/07 20:32:35 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(WrongCat const &src): WrongAnimal()
{
	type = "WrongCat";
	std::cout << "Copy construtor called for WrongCat" << std::endl;
	*this = src;
	return;
}

WrongCat::WrongCat()
{
	std::cout << "Default construtor called for WrongCat" << std::endl;
	return;
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor called for WrongCat" << std::endl;
	return;
}

void WrongCat::makeSound() const
{
	std::cout << "Meow !" << std::endl;
}
