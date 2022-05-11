/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:55:52 by rchampli          #+#    #+#             */
/*   Updated: 2022/05/11 16:15:17 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
	std::cout << this->name << " attack with their" << &this->weapon << std::endl;
}