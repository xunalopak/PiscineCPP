/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:15:47 by rchampli          #+#    #+#             */
/*   Updated: 2022/05/11 15:30:18 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON HPP

#include <iostream>
#include <string>

class Weapon
{
private:
	std::string	type;
public:
	Weapon(std::string type);
	~Weapon();

	const std::string 	&getType(void);
	void				setType(const std::string &type);
};

Weapon::Weapon(std::string type) : type(type)
{
}

Weapon::~Weapon()
{
}


#endif