/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 02:40:22 by rchampli          #+#    #+#             */
/*   Updated: 2022/05/11 03:28:39 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main(void)
{
	std::cout << "Creating the first Zombie, Robert, \"manually\"" << std::endl;
	{
		Zombie	robert("Robert");
		robert.announce();
	}
	std::cout << "Creating the second Zombie, Georges, using the function"
		" newZombie"<< std::endl;
	{
		Zombie	*georges = newZombie("Georges");
		georges->announce();
		delete georges;
	}
	{
		std::cout << "Creating the third Zombie, Mark, using the function"
			" randomChump"<< std::endl;
		randomChump("Mark");
	}
}