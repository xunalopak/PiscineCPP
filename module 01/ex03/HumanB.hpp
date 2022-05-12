/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:43:33 by rchampli          #+#    #+#             */
/*   Updated: 2022/05/12 02:03:06 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMBAB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string name;
	Weapon		*weapon;
public:
	HumanB(std::string name);
	~HumanB();

	void attack();
	void setWeapon(Weapon &newWeapon);
};

#endif
