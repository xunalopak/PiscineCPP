/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 17:57:55 by rchampli          #+#    #+#             */
/*   Updated: 2022/09/05 17:57:57 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <cstdlib>
#include <iomanip>
#include "Array.hpp"
#define RED "\x1B[31m"
#define GREEN "\x1B[32m"
#define END "\x1B[0m"
#define BOLD "\x1B[1m"
#define MAX_VAL 750
#define SIZE 52

static void	printTitle(const std::string title)
{
	std::string		toPrint;
	unsigned int	size = (SIZE > 10 ? SIZE : 10);
	unsigned int	n;

	toPrint = " " + title + " ";
	n = toPrint.size();
	if (n > size)
	{
		toPrint = toPrint.substr(0, size - 2);
		toPrint[size - 4] = '.';
		toPrint[size - 3] = ' ';
		n = toPrint.size();
	}
	std::cout << std::endl << std::setfill('=') << std::setw(size) << "" << std::endl;
	std::cout << std::setw(size / 2) << toPrint.substr(0, n / 2);
	std::cout << toPrint.substr(n / 2, n - n / 2);
	std::cout << std::setfill('=') << std::setw(size - size / 2 - n + n / 2) << "" << std::endl;
	std::cout << std::setfill('=') << std::setw(size) << "" << std::endl;
}

static void	printSubtitle(const std::string subtitle)
{
	std::cout << BOLD << subtitle << END << std::endl;
}

static void	printResult(bool ok)
{
	unsigned int	size = (SIZE > 10 ? SIZE : 10);
	
	std::cout << std::setfill(' ') << std::setw(size - 3) <<  " [";
	if (ok)
		std::cout << GREEN << "OK";
	else
		std::cout << RED << "KO";
	std::cout << END << "]" << std::endl;
}

static int	testSubject(void)
{
	Array<int> numbers(MAX_VAL);
	int *mirror = new int[MAX_VAL];

	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = std::rand();
		numbers[i] = value;
		mirror[i] = value;
	}

	// SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}

	try
	{
		numbers[-2] = 0;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}

	delete[] mirror;
	return 0;
}

static void	testInt(void)
{
	Array<int>	numbers(MAX_VAL);
	bool		areEquals = true;

	// init array randomly
	for (int i = 0; i < MAX_VAL; i++)
		numbers[i] = std::rand() % 1000;

	// copy constructor
	printSubtitle("Copy constructor");

	Array<int>	copy(numbers);
	std::cout << "number:\t" << numbers;
	std::cout << "copy:  \t" << copy;
	for (int i = 0; i < MAX_VAL; i++)
	{
		if (numbers[i] != copy[i])
			areEquals = false;
	}
	printResult(areEquals);

	// modify after copy
	printSubtitle("Modify after copy");
	copy[0] = numbers[0] + 1;
	numbers[1] = copy[1] + 10;
	std::cout << "number:\t" << numbers;
	std::cout << "copy:  \t" << copy;
	printResult(copy[0] != numbers[0] && copy[1] != numbers[1]);

	// modify after assignation
	Array<int>	assign(MAX_VAL);

	assign = numbers;
	printSubtitle("Modify after assignation");
	assign[0] = numbers[0] - 105;
	numbers[1] = assign[1] + 256;
	std::cout << "number:\t" << numbers;
	std::cout << "assign:\t" << assign;
	printResult(assign[0] != numbers[0] && assign[1] != numbers[1]);

	// assignation not empty
	{
		printSubtitle("Assignation of an instance with different size");
		Array<int>	numbers(10);

		// init array randomly
		for (int i = 0; i < 10; i++)
			numbers[i] = std::rand() % 1000;
		std::cout << "assign:\t" << assign;
		assign = numbers;
		std::cout << "assign:\t" << assign;
		printResult(assign.size() == 10);
	}
	// exception out of range
	printSubtitle("Index out of range");
	try
	{
		numbers[-2] = 0;
		printResult(false);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
		printResult(true);
	}
}

static std::string	randomString(int size)
{
	const std::string	alphaNum = "abcdefghijklmnopqrstuvwxyz";
	std::string			randomStr = "";

	for (int i = 0; i < size; i++)
		randomStr += alphaNum[std::rand() % alphaNum.size()];
	return (randomStr);
}

static void	testString(void)
{
	Array<std::string>	strings(MAX_VAL);
	bool				areEquals = true;

	// init array randomly
	for (int i = 0; i < MAX_VAL; i++)
		strings[i] = randomString(5);

	// copy constructor
	printSubtitle("Copy constructor");

	Array<std::string>	copy(strings);
	std::cout << "number:\t" << strings;
	std::cout << "copy:  \t" << copy;
	for (int i = 0; i < MAX_VAL; i++)
	{
		if (strings[i] != copy[i])
			areEquals = false;
	}
	printResult(areEquals);

	// modify after copy
	printSubtitle("Modify after copy");
	copy[0] = strings[0] + "A";
	strings[1] = copy[1] + "B";
	std::cout << "number:\t" << strings;
	std::cout << "copy:  \t" << copy;
	printResult(copy[0] != strings[0] && copy[1] != strings[1]);

	// modify after assignation
	Array<std::string>	assign(MAX_VAL);

	assign = strings;
	printSubtitle("Modify after assignation");
	assign[0] = strings[0] + "C";
	strings[1] = assign[1] + "D";
	std::cout << "number:\t" << strings;
	std::cout << "assign:\t" << assign;
	printResult(assign[0] != strings[0] && assign[1] != strings[1]);

	// assignation not empty
	{
		printSubtitle("Assignation of an instance with different size");
		Array<std::string>	strings(10);

		// init array randomly
		for (int i = 0; i < 10; i++)
			strings[i] = randomString(5);
		std::cout << "assign:\t" << assign;
		assign = strings;
		std::cout << "assign:\t" << assign;
		printResult(assign.size() == 10);
	}

	// exception out of range
	printSubtitle("Index out of range");
	try
	{
		strings[-2] = "0";
		printResult(false);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
		printResult(true);
	}
}


int main(void)
{
	srand(time(NULL));
	printTitle("SUBJECT");
	printResult(testSubject() == 0);

	printTitle("INT ARRAYS");
	testInt();

	printTitle("STRING ARRAYS");
	testString();
	
	return (0);
}