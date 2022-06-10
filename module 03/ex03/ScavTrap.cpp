/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 14:35:23 by rchampli          #+#    #+#             */
/*   Updated: 2022/06/07 17:28:34 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(const std::string name)
{
	this->name = name;
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
	this->HPMax = this->HitPoints;
	std::cout << "Name constructor for ScavTrap called" << std::endl;
	return;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor for ScavTrap called" << std::endl;
	return;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & other)
{
	std::cout << "Assignement operator called for ScavTrap" <<std::endl;
	std::cout << other << std::endl;
	return *this;
}

void ScavTrap::attack(std::string const & target) const 
{
	std::cout << "ScavTrap " << this->name << "attack" << target
	<< " causing " << this->AttackDamage << " damage !" << std::endl;
}

void ScavTrap::guardGate() const
{
	std::cout << "ScavTrap " << this->name << " entered on the Gate Keeper mode !!!"
	<< std::endl;
}
