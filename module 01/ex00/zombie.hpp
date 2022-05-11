/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 02:40:19 by rchampli          #+#    #+#             */
/*   Updated: 2022/05/11 03:55:49 by rchampli         ###   ########.fr       */
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
	Zombie(std::string name);
	~Zombie();

	void announce(void);
};

Zombie *newZombie(std::string name);
void	randomChump(std::string name);

#endif