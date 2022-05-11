/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:38:52 by rchampli          #+#    #+#             */
/*   Updated: 2022/05/11 16:14:51 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
private:
	std::string name;
	Weapon 		&weapon;
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();

	void attack();
	Weapon& getWeapon(void);
};


#endif