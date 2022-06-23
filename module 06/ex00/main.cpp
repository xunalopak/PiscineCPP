/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:52:07 by rchampli          #+#    #+#             */
/*   Updated: 2022/06/21 17:53:21 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convertor.hpp"

int main(int argc, char **argv)
{
	if (argc != 2) {
		std::cout << "Invalid argument count! (Need 1)" << std::endl;
		return 0;
	}

	try {
		Convertor conv(argv[1]);

		conv.printTypes();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}