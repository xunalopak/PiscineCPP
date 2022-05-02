/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 12:34:06 by rchampli          #+#    #+#             */
/*   Updated: 2022/05/02 13:40:33 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int	i = 1; int j = 0;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
		while(ac > i)
		{
			j = 0;
			while (j < strlen(av[i]))
				std::cout << (char) toupper(av[i][j++]);
			i++;
			std::cout << " ";
		}
		std::cout << std::endl;
	return (0);
}