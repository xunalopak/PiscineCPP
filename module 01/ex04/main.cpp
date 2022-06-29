/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:17:16 by rchampli          #+#    #+#             */
/*   Updated: 2022/06/29 02:28:09 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main (int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: ./executable <filename> <to_replace> <replacement>" << std::endl;
		return 1;
	}

	std::string filename	= argv[1];
	std::string s1			= argv[2];
	std::string s2			= argv[3];

	if (filename == "" || s1 == "" || s2 == "")
	{
		std::cout << "filename must not be an empty string" << std::endl;
		return 1;
	}

	std::ifstream input(filename.c_str());

	if (!input.is_open())
	{
		std::cout << "could not open input file" << std::endl;
		return 1;
	}

	std::ofstream output((filename + ".replace").c_str());

	if (!output.is_open())
	{
		std::cerr << "could not open output file" << std::endl;
		input.close();
		return 1;
	}

	std::string content((std::istreambuf_iterator<char>(input)), std::istreambuf_iterator<char>());
	std::string new_content = "";

	input.open(filename.c_str());

	for (size_t i = 0; i < content.length();)
	{
		if (content.compare(i, s1.length(), s1) == 0)
		{
			content.erase(i, s1.length());
			new_content.append(s2);
			continue;
		}
		new_content.append(sizeof(char), content[i++]);
	}

	output << new_content;

	std::cerr << "Replaced every occurence of '" << s1 << "' with '"
		<< s2 << "' (output file: '" << filename << ".replace')" << std::endl;
}