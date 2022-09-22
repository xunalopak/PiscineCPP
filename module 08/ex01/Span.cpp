/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 14:39:28 by rchampli          #+#    #+#             */
/*   Updated: 2022/09/22 16:03:12 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(Span const &src)
{
	std::cout << "Copy construtor called for Span" << std::endl;
	*this = src;
	return;
}

Span::Span(void) : _size(0)
{
	return;
}

Span::Span(unsigned int size) : _size(size)
{
	std::cout << "Default construtor called for Span" << std::endl;
	return;
}

Span::~Span()
{
	std::cout << "Destructor called for Span" << std::endl;
	_data.clear();
}

Span &Span::operator=(const Span &rhs) {
	std::cout << "Assignement operator called" << std::endl;
	this->_data.clear();
	for (unsigned long i = 0; i < rhs._data.size(); i++)
		this->_data.push_back(rhs._data[i]);
	return *this;
}

void Span::addNumber(const unsigned int N)
{
	if (this->_data.size() >= this->_size)
		throw std::length_error("Span::exception : data full");
	_data.push_back(N);
	_size++;
}

// int Span::shortestSpan(void) const 
// {
// 	if (this->_data.size() < 2)
// 		throw std::length_error("Cannot find shortest span if less than 2 values");
// 	int shortest = INT_MAX;
// 	std::vector<int> temp = this->_data;

// 	std::sort(temp.begin(), temp.end());

// 	std::vector<int>::iterator it = temp.begin();
// 	while ((it + 1) != temp.end()) {
// 		if (*(it + 1) - *it < shortest)
// 			shortest = *(it + 1) - *it;
// 		it++;
// 	}
// 	return shortest;
// }

int Span::shortestSpan(void) const
{
	std::vector<int>	copy = _data;
	
	if (this->_size < 2)
		throw std::length_error("Span::exception : not enough numbers");
	int shortest = INT_MAX;
	
	std::sort(copy.begin(), copy.end());

	std::vector<int>::iterator it = copy.begin();
	while ((it + 1) != copy.end())
	{
		if (*(it + 1) - *it < shortest)
			shortest = *(it + 1) - *it;
		it++;
	}
	return shortest;
}

int Span::longestSpan(void) const
{
	std::vector<int>	copy = _data;
	
	if (this->_size < 2)
		throw std::length_error("Span::exception : not enough numbers 1");
	std::sort(copy.begin(), copy.end());
	return *(copy.end() - 1) - *copy.begin();
}

void Span::iteratorFiller(std::vector<int>::iterator start, std::vector<int>::iterator end) {
	if (this->_size - this->_data.size() <= 0)
		throw std::length_error("Cannot add that many integers");

	copy(start, end, std::back_inserter(this->_data));
}

void Span::randomFiller(void)
{
	while (this->_data.size() < this->_size)
	{
		this->_data.push_back(rand());
	}
}
