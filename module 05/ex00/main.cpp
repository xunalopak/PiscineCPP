/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:53:01 by rchampli          #+#    #+#             */
/*   Updated: 2022/06/10 16:55:09 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

static void eprintln(std::string str)
{
	std::cout << ERROR << str << RESET << std::endl;
}

int main()
{
	try {
		Bureaucrat monique("Monique", 1);

		Bureaucrat michel("Michel", 43);

		Bureaucrat sandrine("Sandrine", 150);

		std::cout << monique << std::endl;
		std::cout << michel << std::endl;
		std::cout << sandrine << std::endl;

		//monique.gradeUp();
		// michel.gradeUp();
		//sandrine.gradeDown();

		std::cout << michel << std::endl;
	} catch (std::exception &e) {
		eprintln(e.what());
	}
}