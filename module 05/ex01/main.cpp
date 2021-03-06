/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:53:01 by rchampli          #+#    #+#             */
/*   Updated: 2022/06/17 18:36:34 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat monique("Monique", 2);

		Bureaucrat michel("Michel", 43);

		Bureaucrat sandrine("Sandrine", 149);
		
		std::cout << "--------" << std::endl;
		std::cout << monique << std::endl;
		std::cout << michel << std::endl;
		std::cout << sandrine << std::endl;
		std::cout << "--------" << std::endl;

		monique.gradeUp();
		michel.gradeUp();
		sandrine.gradeDown();

		std::cout << monique << std::endl;
		std::cout << michel << std::endl;
		std::cout << sandrine << std::endl;
		std::cout << "--------" << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}