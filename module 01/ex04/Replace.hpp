/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 19:16:54 by rchampli          #+#    #+#             */
/*   Updated: 2022/05/12 19:43:23 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <algorithm>
# include <fstream>

class CppSed
{
public:
	CppSed( void );
	~CppSed( void );
	bool	setFile( std::string newFile );
	bool	replace( std::string stringToReplace, std::string replacement );
	void	outputToFile( std::string fileContent );
private:
	std::string		stringToReplace;
	std::string		replacement;
	std::string		fileName;
	std::ifstream	inputFileStream;
};

#endif