/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   annuaire.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 22:07:02 by rchampli          #+#    #+#             */
/*   Updated: 2022/06/17 17:53:02 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/annuaire.hpp"

std::string Field_menu[4] = {
	"Index",
	"First Name",
	"Last Name",
	"Nickname"
};

Annuaire::Annuaire()
{
	this->contact_amount = 0;
	this->loop = 0;
}

Annuaire::~Annuaire()
{}

void Annuaire::menu(void)
{
	std::cout << "ANNUAIRE: " << std::endl;
	std::cout << "Enter command [ADD, SEARCH, EXIT]" << std::endl;	
}

void Annuaire::add(void)
{
	if (this->contact_amount == 8)
		{contact_amount = 0; loop = 1;}
	else if (this->contacts[this->contact_amount].set_info(this->contact_amount + 1))
		this->contact_amount++;
}

void Annuaire::display_menu(void)
{
	for (int i = 0; i < 4; i++)
	{
		std::cout << '|' << std::setw(10) << Field_menu[i];
	}
	std::cout << '|' << std::endl;
	if (loop == 0)
		for (int i = 0; i < this->contact_amount; i++)
			this->contacts[i].display_menu();
	else if (loop == 1)
		for (int i = 0; i < 8; i++)
				this->contacts[i].display_menu();
}

void Annuaire::search_menu(void)
{
	std::string indextoi;
	int	index;
	if (contact_amount == 0)
		std::cout << "Please add contact before" << std::endl;
	else
	{
		this->display_menu();
		while (1)
		{
			std::cout << "COMMAND | 0 -> MENU | 1-8 INDEX" << std::endl;
			std::cout << "INDEX -> ";
			getline(std::cin, indextoi);
			std::istringstream(indextoi) >> index;
			if (std::cin.eof())
				return ;
			if (index == 0)
				{std::cout << "Returning to menu..." << std::endl; std::cin.clear(); break;}
			else if(index > this->contact_amount || !index)
				{std::cout << "Enter a valid index" << std::endl; std::cin.clear();}
			else
				this->contacts[index - 1].display();
		}
	}
}
