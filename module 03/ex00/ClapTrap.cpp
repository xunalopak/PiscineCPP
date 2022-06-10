/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 12:57:02 by rchampli          #+#    #+#             */
/*   Updated: 2022/06/07 14:29:00 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( ClapTrap const & src )
{
		std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

ClapTrap::ClapTrap( const std::string name ): name(name), HitPoints(10),
	EnergyPoints(10), AttackDamage(0)
{
	this->HPMax = this->HitPoints;
	std::cout << "Name constructor called" << std::endl;
	return;
}

ClapTrap::~ClapTrap( void )
{
		std::cout << "Destructor called" << std::endl;
	return;
}

ClapTrap &	ClapTrap::operator=( ClapTrap const & rhs )
{
	std::cout << "Assignement operator called, but it doesn't work because I go"
		"t lazy making accessors" << std::endl;
	std::cout << rhs << std::endl;
	return *this;
}

std::ostream &	operator<<( std::ostream & ostr, ClapTrap const & instance)
{
	ostr << "ClapTrap " << instance.getName();
	return ostr;
}

const std::string &ClapTrap::getName(void) const
{
	return this->name;
}

void ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap " << this->name << " attack " << target
	<< " with " << this->AttackDamage << " damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int damage)
{
	this->EnergyPoints -= 1;
	this->HitPoints -= damage;
	if (EnergyPoints <= 0)
		std::cout << "ClapTrap " << this->name << "has no energy" << std::endl;
	if (this->HitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->name << " took " << damage
		<< " and die..." << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->name << " took " << damage
		<< std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int heal)
{
	this->EnergyPoints -= 1;
	
	if (this->EnergyPoints <= 0)
		std::cout << "ClapTrap " << this->name << "has no energy" << std::endl;
	if (this->HitPoints > this->HPMax)
	{
		std::cout << "ClapTrap " << this->name << "You can't heal more than max health" << std::endl;
	}
	else
	{
		this->HitPoints += heal;
		std::cout << "ClapTrap " << this->name << " Healed of " << heal << " points" << std::endl;
	}
}