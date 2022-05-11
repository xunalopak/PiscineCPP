/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 03:33:39 by rchampli          #+#    #+#             */
/*   Updated: 2022/05/11 03:56:44 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Zombie_HPP
# define Zombie_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string name;
public:
	Zombie();
	~Zombie();

	void announce(void);
	void setName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif