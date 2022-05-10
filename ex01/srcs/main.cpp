/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 15:26:50 by rchampli          #+#    #+#             */
/*   Updated: 2022/05/10 16:49:12 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/annuaire.hpp"


std::string	toup(std::string command)
{
	int	i = -1;
	while (command[++i])
		command[i] = toupper(command[i]);
	return (command);
}

int	main(int ac, char **av)
{
	Annuaire 	annuaire;
	bool		run = true;
	std::string	command;
	
	annuaire.menu();
	while (run)
	{
		std::cout << "Menu -> ";
		getline(std::cin, command);
		if (std::cin.eof())
			return (1);
		command = toup(command);
		if (command == "ADD")
			annuaire.add();
		else if (command == "SEARCH")
			annuaire.search_menu();
		else if (command == "EXIT")
		{std::cout << "Thanks for using me ! Good bye !!" << std::endl; run = false;}
	}
	return 0;
}