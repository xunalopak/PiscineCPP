/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:01:31 by rchampli          #+#    #+#             */
/*   Updated: 2022/06/07 16:45:01 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name)
{
	this->name = name;
	this->HitPoints = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
	this->HPMax = this->HitPoints;
	std::cout << "Name constructor for FragTrap called" << std::endl;
	return;
}

FragTrap::FragTrap()
{
	std::cout << "Default constructor for FragTrap called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor for FragTrap called" << std::endl;
	return;
}

FragTrap & FragTrap::operator=(FragTrap const &other)
{
	std::cout << "Assignement operator called for FragTrap" << std::endl;
	std::cout << other << std::endl;
	return *this;
}

void FragTrap::highFivesGuys()
{
	std::cout << "High Fives ?!" << std::endl;
}
