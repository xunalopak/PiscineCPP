/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 21:35:16 by rchampli          #+#    #+#             */
/*   Updated: 2022/05/12 22:11:54 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my "
	"7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put"
	"enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for"
	"years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now."
	<< std::endl;
}

void Harl::complain(std::string level)
{
	void (Harl::*complaint[])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	std::string strcomplaint[] = {
		"debug",
		"info",
		"warning",
		"error"
	};

	for (int i = 0; i < 4; i++)
	{
		void (Harl::*selected)(void) = complaint[i];
		if (level == strcomplaint[i])
			(this->*selected)();
	}
}