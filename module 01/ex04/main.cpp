/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:17:16 by rchampli          #+#    #+#             */
/*   Updated: 2022/05/12 18:01:51 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sys/stat.h>

inline int file_exist(std::string& file_name)
{
	struct stat buf;
	return (stat(file_name.c_str(), &buf) == 0);
}

bool check_arg(char **av)
{
	std::string str_check;

	for (int ac = 1; ac < 4; ac++)
	{
		str_check.append(av[ac]);
		if (!str_check.compare(""))
			return (false);
		str_check.clear();
	}
	str_check.append(av[1]);
	if (std::cout << file_exist(str_check) << std::endl)
		std::cout << str_check<< std::endl;
	str_check.clear();
	return (true);
}

int	main(int ac, char **av)
{
	if (ac != 4)
		std::cout << "Error in argument" << std::endl;
	else
	{
		if (!check_arg(av))
			return (1);
	}
	return (0);
}