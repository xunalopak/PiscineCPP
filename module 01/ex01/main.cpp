/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 03:33:31 by rchampli          #+#    #+#             */
/*   Updated: 2022/05/11 03:51:57 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	announceAllZombies( Zombie *zombieHorde, size_t numberOfZombies)
{
	for (size_t i = 0; i < numberOfZombies; i++)
	{
		zombieHorde[i].announce();
	}
}
int		main( void )
{
	std::cout << "Creating the first Zombie horde of Roberts" << std::endl;
	{
		Zombie	*firstZombieHorde = zombieHorde(4, "Robert");
		announceAllZombies(firstZombieHorde, 4);
		delete [] firstZombieHorde;
	}
}