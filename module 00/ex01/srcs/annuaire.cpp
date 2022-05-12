/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   annuaire.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 22:07:02 by rchampli          #+#    #+#             */
/*   Updated: 2022/05/12 03:04:10 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/annuaire.hpp"

Annuaire::Annuaire()
{
	this->contact_amount = 0;
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
		std::cout << '|' << std::setw(10) << this->Field_menu[i];
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
	int index;
	if (contact_amount == 0)
		std::cout << "Please add contact before" << std::endl;
	else
	{
		this->display_menu();
		while (1)
		{
			std::cout << "Index :";
			std::cin >> index;
			if (index == 0)
				{std::cout << "Returning to menu..." << std::endl; std::cin.clear(); break;}
			else if(index > this->contact_amount || !index)
				{std::cout << "Enter a valid index" << std::endl; std::cin.clear();}
			else
				this->contacts[index - 1].display();
		}
	}
}
