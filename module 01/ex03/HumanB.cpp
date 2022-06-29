/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:55:52 by rchampli          #+#    #+#             */
/*   Updated: 2022/06/29 02:21:40 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::setWeapon(Weapon &weapon) {
	HumanB::weapon = &weapon;
}

void HumanB::attack() {
	if (!this->weapon)
		{std::cout << name + " attacks with their punch" << std::endl; return;} 
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

HumanB::HumanB(const std::string &name) :name(name), weapon((Weapon *)0) {}