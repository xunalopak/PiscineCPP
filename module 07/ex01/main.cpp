/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 17:23:35 by rchampli          #+#    #+#             */
/*   Updated: 2022/09/05 17:39:06 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	int			arrayInt[5] = {0, 1, 2, 3, 4};
	std::string	arrayStr[5] = {"Retsuko", "Fenneko", "Haida", "Washimi", "Gori"};
	const char	*arrayStrC[5] = {"Haida", "Washimi", "Retsuko", "Fenneko", "Gori"};
	char		arrayChar[5] = {'r', 'e', 't', 's', 'u'};

	iter<int>(arrayInt, 5, printArray);
	std::cout << std::endl;
	iter<int>(arrayInt, 2, printArray);
	std::cout << std::endl;

	iter<std::string>(arrayStr, 5, printArray);
	std::cout << std::endl;

	iter<const char *>(arrayStrC, 5, printArray);
	std::cout << std::endl;

	iter<char>(arrayChar, 5, printArray);
	std::cout << std::endl;

	return (0);
}