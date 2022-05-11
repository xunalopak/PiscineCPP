/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:21:27 by rchampli          #+#    #+#             */
/*   Updated: 2022/05/11 15:30:02 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string &Weapon::getType(void)
{
	return (this->type);
}

void Weapon::setType(const std::string &type)
{
	if (type == "")
		{std::cout << "Empty strign" << std::endl; return;}
	this->type = type;
	return;
}