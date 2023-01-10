/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:53:01 by rchampli          #+#    #+#             */
/*   Updated: 2023/01/10 01:24:53 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try {

		Form form("Formulaire", 5, 5);
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

		form.beSigned(monique);
		if (form.isSigned())
			std::cout << "Form signed" << std::endl;
		else
			std::cout << "Form not signed" << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}