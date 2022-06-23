/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convertor.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:52:17 by rchampli          #+#    #+#             */
/*   Updated: 2022/06/21 18:16:26 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTOR_H
#define CONVERTOR_H

#include <string>
#include <iostream>
#include <exception>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <math.h>

class Convertor
{
public:
    Convertor(std::string input);
    Convertor(const Convertor &src);
    virtual ~Convertor();
    Convertor&operator=(const Convertor &other);

    class InvalidInputException: public std::exception{
        virtual const char* what() const throw() {return "Input is invalid, please double check :/";}
    };

    void printTypes();

private:
    void printChar();
	void printInt();
	void printFloat();
	void printDouble();

	bool parseInput();
	bool parseWeirdInput();
	const std::string input;
	std::string type;

	int iValue;
	char cValue;
	float fValue;
	double dValue;

protected:

};

#endif