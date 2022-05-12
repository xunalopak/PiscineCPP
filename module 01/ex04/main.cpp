/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:17:16 by rchampli          #+#    #+#             */
/*   Updated: 2022/05/12 19:44:23 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

CppSed::CppSed( void )
{
}
CppSed::~CppSed( void )
{
}
bool	CppSed::setFile( std::string newFile )
{
	if (this->inputFileStream.is_open())
		this->inputFileStream.close();
	if (newFile == "")
	{
		std::cerr << "The file to open can't be an empty string" << std::endl;
		return (false);
	}
	this->inputFileStream.open(newFile.c_str());
	this->fileName = newFile;
	std::cout << "Input file set to " << newFile << std::endl;
	return (true);
}
bool	CppSed::replace(std::string stringToReplace, std::string replacement)
{
	std::string	result;
	size_t		toReplaceLen = stringToReplace.length();
	if (stringToReplace == "" || replacement == "")
	{
		std::cerr << "Strings can't be empty" << std::endl;
		return (false);
	}
	result.assign(std::istreambuf_iterator<char>(this->inputFileStream),
			std::istreambuf_iterator<char>());
	for (size_t pos = 0; pos < result.length(); pos++)
	{
		if (result.compare(pos, toReplaceLen, stringToReplace) == 0)
		{
			result.erase(pos, toReplaceLen);
			result.insert(pos, replacement);
			/* result.replace(pos, toReplaceLen, replacement); */
		}
	}
	this->outputToFile(result);
	return (true);
}
void	CppSed::outputToFile( std::string fileContent )
{
	std::ofstream	outputFileStream;
	std::string		outputFileName = this->fileName;
	std::transform(outputFileName.begin(), outputFileName.end(),
			outputFileName.begin(), ::toupper);
	outputFileName += ".replace";
	outputFileStream.open(outputFileName.c_str());
	std::cout << "Writing modified content to file \"" << outputFileName
		<< "\"" << std::endl;
	outputFileStream << fileContent;
}

void	printUsage(void)
{
	std::cout << "./cppSed fileName stringToReplace replacement" << std::endl;
}
int	printError(std::string errorMsg)
{
	if (errorMsg != "")
		std::cerr << "Error: " << errorMsg << std::endl;
	printUsage();
	return (1);
}
int	main(int argc, char **argv)
{
	CppSed sed;
	if (argc != 4)
		return (printError("Wrong number of arguments"));
	if (!sed.setFile(argv[1]))
		return (printError(""));
	if (!sed.replace(argv[2], argv[3]))
		return (printError(""));
}
