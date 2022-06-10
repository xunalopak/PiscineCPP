/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:57:08 by rchampli          #+#    #+#             */
/*   Updated: 2022/06/07 17:45:03 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string &name)
{
	ClapTrap::name = name + "_clap_name";
	this->_name = name;
	this->HitPoints = FragTrap::HitPoints;
	this->EnergyPoints = ScavTrap::EnergyPoints;
	this->AttackDamage = FragTrap::AttackDamage;
	std::cout << "Name constructor for DiamonTrap" << std::endl;
	return;
}

DiamondTrap::DiamondTrap( void )
{
	std::cout << "Default constructor for DiamondTrap called" << std::endl;
	return;
}

DiamondTrap::DiamondTrap( DiamondTrap const & src )
{
	std::cout << "Copy constructor for DiamondTrap called" << std::endl;
	*this = src;
	return;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor for DiamondTrap called" << std::endl;
	return;
}

DiamondTrap & DiamondTrap::operator=( DiamondTrap const & other )
{
	std::cout << "Assignement operator doesn't work, get lost" << std::endl;
	std::cout << other << std::endl;
	return *this;
}

void DiamondTrap::attack(const std::string &target) const
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void) const
{
	std::cout << "I am " << this->_name << "and my ClapTrap name is "
	<< ClapTrap::name << std::endl;
}