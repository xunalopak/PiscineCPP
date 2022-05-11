/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 14:56:00 by rchampli          #+#    #+#             */
/*   Updated: 2022/05/11 15:07:19 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string hi = "HI THIS IS BRAIN";
	std::string *StringPTR = &hi;
	std::string &StringREF = hi;

	std::cout << &hi << std::endl;
	std::cout << &*StringPTR << std::endl;
	std::cout << &StringREF << std::endl;
	
	std::cout << hi << std::endl;
	std::cout << *StringPTR << std::endl;
	std::cout << StringREF << std::endl;

	return (0);
}