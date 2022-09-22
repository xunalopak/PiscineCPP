/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 20:47:31 by rchampli          #+#    #+#             */
/*   Updated: 2022/09/09 20:47:32 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include <vector>
#include <deque>
#include <iomanip>
#include <ctime>
#include "easyfind.hpp"
#define YELLOW "\x1B[33m"
#define END "\x1B[0m"
#define SIZE 52

static void	display(int a)
{
	std::cout << a << " ";
}

static void	printTitle(std::string title, bool toUpper = true)
{
	static int		first;
	std::string		toPrint;
	unsigned int	size = (SIZE > 10 ? SIZE : 10);
	char			c = '=';
	unsigned int	n;

	if (first > 0)
		std::cout << std::endl;
	else
		first++;

	toPrint = " " + title + " ";
	if (toUpper)
	{
		for (int i = 0; toPrint[i]; i++)
			toPrint[i] = toupper(toPrint[i]);
	}
	n = toPrint.size();
	if (n > size)
	{
		toPrint = toPrint.substr(0, size - 2);
		toPrint[size - 4] = '.';
		toPrint[size - 3] = ' ';
		n = toPrint.size();
	}
	std::cout << std::setfill(c) << std::setw(size) << "" << std::endl;
	std::cout << std::setw(size / 2) << toPrint.substr(0, n / 2);
	std::cout << toPrint.substr(n / 2, n - n / 2);
	std::cout << std::setfill(c) << std::setw(size - size / 2 - n + n / 2) << "" << std::endl;
	std::cout << std::setfill(c) << std::setw(size) << "" << std::endl;
}


static void	printSubtitle(const std::string subtitle)
{
	std::cout << std::endl << YELLOW << subtitle << END << std::endl;
}

template<typename T> void	executeTest(const std::string name)
{
	printTitle("INT " + name, true);

	int	fill[7];
	for (int i = 0; i < 7; i++)
		fill[i] = std::rand() % 100;

	printSubtitle("Init " + name + "<int>");
	T	lst(fill, fill + 7);
	std::for_each(lst.begin(), lst.end(), display);
	std::cout << std::endl;

	printSubtitle("Item found in " + name + "<int>");
	std::cout << "value at easyfind(container, " << fill[3] << ") is " << *(easyfind(lst, fill[3])) << std::endl;

	printSubtitle("Print " + name + "<int> from the found iterator");
	std::for_each(easyfind(lst, fill[3]), lst.end(), display);
	std::cout << std::endl;

	printSubtitle("Item can't be found in " + name + "<int>");
	std::cout << "easyfind(container, 101) == container.end() ? " << ((lst.end() == easyfind(lst, 101)) ? "true" : "false") << std::endl;
}

int	main(void)
{
	srand(time(NULL));

	executeTest< std::list<int> >("list");
	executeTest< std::vector<int> >("vector");
	executeTest< std::deque<int> >("deque");
	
	return (0);
}