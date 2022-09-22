/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:08:58 by rchampli          #+#    #+#             */
/*   Updated: 2022/09/22 16:48:02 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << "VALUE OF TOP: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "SIZE OF STACK: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(-82);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;

	std::cout << "======== CONTENT ========" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "\033[0;32m======= TEST_COPY =======\033[0;0m" << std::endl;

	MutantStack<int> s(mstack);

	std::cout << "====== MEMORY_DIFF ======" << std::endl;

	s.push(4242);

	std::cout << "Top of origin: " << mstack.top() << std::endl;
	std::cout << "Top of copy: " << s.top() << std::endl;

	std::cout << "====== CONTENT_COPY =====" << std::endl;
	MutantStack<int>::iterator itc = s.begin();
	MutantStack<int>::iterator itce = s.end();
	while (itc != itce)
	{
		std::cout << *itc << std::endl;
		++itc;
	}
	return 0;
}