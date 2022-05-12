/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:55:52 by rchampli          #+#    #+#             */
/*   Updated: 2022/05/12 02:01:33 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(nullptr)
{
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
	std::cout << this->name << " attack with their " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &newWeapon)
{
	if (newWeapon.getType() == "")
		std::cerr << "Empty Weapon";
	this->weapon = &newWeapon;
}