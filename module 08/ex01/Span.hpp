/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 14:39:31 by rchampli          #+#    #+#             */
/*   Updated: 2022/09/22 15:57:36 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
#define SPAN_H

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <limits.h>

class Span
{
public:
    Span(unsigned int n);
	Span(void);
    Span(const Span &src);
    virtual ~Span();
    Span&operator=(const Span &other);

    void   	addNumber(const unsigned int N);
    int    	shortestSpan(void) const;
    int    	longestSpan(void) const;
	void	printData(std::ostream &o, const unsigned int max = 10) const;
    void    iteratorFiller(std::vector<int>::iterator start, std::vector<int>::iterator end);
    void    randomFiller(void);

private:
	std::vector<int>	_data;
    unsigned int        _size;
};

#endif
