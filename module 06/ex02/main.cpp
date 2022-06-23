/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 18:47:05 by rchampli          #+#    #+#             */
/*   Updated: 2022/06/23 18:47:15 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
Base	*generate( void )
{
	int	selected = rand() % 3;
	if (selected == 0)
		return new A();
	else if (selected == 1)
		return new B();
	else if (selected == 2)
		return new C();
	else
		throw new std::exception();
}
void	identify( Base &p )
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch (std::exception &e)
	{
		(void)e;
	}
	try
	{
		B &b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch (std::exception &e)
	{
		(void)e;
	}
	try
	{
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "C" << std::endl;
	}
	catch (std::exception &e)
	{
		(void)e;
	}
}
void	identify( Base *p )
{
	A *a;
	if ((a = dynamic_cast<A *>(p)))
		std::cout << "A" << std::endl;
	B *b;
	if ((b = dynamic_cast<B *>(p)))
		std::cout << "B" << std::endl;
	C *c;
	if ((c = dynamic_cast<C *>(p)))
		std::cout << "C" << std::endl;
}
int		main( void )
{
	Base	*base;
	std::cout << "Identifying with pointers" << std::endl;
	base = generate();
	identify(base);
	delete base;
	base = generate();
	identify(base);
	delete base;
	base = generate();
	identify(base);
	delete base;
	base = generate();
	identify(base);
	delete base;
	base = generate();
	identify(base);
	delete base;
	base = generate();
	identify(base);
	delete base;
	base = generate();
	identify(base);
	delete base;
	base = generate();
	identify(base);
	delete base;
	std::cout << std::endl << "Identifying with references" << std::endl
		<< std::endl;
	base = generate();
	identify(*base);
	delete base;
	base = generate();
	identify(*base);
	delete base;
	base = generate();
	identify(*base);
	delete base;
	base = generate();
	identify(*base);
	delete base;
	base = generate();
	identify(*base);
	delete base;
	base = generate();
	identify(*base);
	delete base;
	base = generate();
	identify(*base);
	delete base;
	base = generate();
	identify(*base);
	delete base;
	base = generate();
	identify(*base);
	delete base;
}