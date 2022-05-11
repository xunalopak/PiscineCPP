/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 13:55:29 by rchampli          #+#    #+#             */
/*   Updated: 2022/05/10 16:45:15 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/annuaire.hpp"

Contact::Contact()
{
	for (int i = FirstName; i <= DarkSecret; i++)
		this->information[i] = std::string();
}

Contact::~Contact()
{}

bool Contact::set_info(int index)
{
	this->index = index;
	int length;
	for (int i = FirstName; i <= DarkSecret; i++)
	{
		std::cout << Field_name[i] << ": ";
		getline(std::cin, this->information[i]);
		if (std::cin.eof())
			return (false);
		length = this->information[i].length();
		if (length == 0)
			{std::cout << "Field(s) empty, contact not added" << std::endl; return (false);}
	}
	std::cout << "Contact added !" << std::endl;
	return (true);
}

void Contact::display_menu(void)
{
	std::cout << '|' <<std::setw(10) << this->index;
	for (int i = FirstName; i <= NickName; i++)
	{
		std::cout << '|';
		if (this->information[i].length() > 10)
			std::cout << this->information[i].substr(0, 9) << '.';
		else
			std::cout << std::setw(10) << this->information[i];
	}
	std::cout << '|' << std::endl;
}

void Contact::display(void)
{
	std::cout << "Contact: " << this->index << std::endl;
	for (int i = FirstName; i <= DarkSecret; i++)
		std::cout << Contact::Field_name[i] << ':' << this->information[i] << std::endl;
}
