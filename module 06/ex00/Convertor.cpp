/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convertor.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:52:15 by rchampli          #+#    #+#             */
/*   Updated: 2022/06/21 18:25:36 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convertor.hpp"

static bool	isValidToInt( double number )
{
	return (number <= std::numeric_limits<int>::max()
			&& number >= std::numeric_limits<int>::min()
			&& number != std::numeric_limits<double>::infinity()
			&& number != -std::numeric_limits<double>::infinity()
			&& number != std::numeric_limits<double>::quiet_NaN());
}
static bool	isValidToFloat( double number )
{
	return ((number <= std::numeric_limits<float>::max()
			 && number >= -std::numeric_limits<float>::max())
			|| number == std::numeric_limits<double>::infinity()
			|| number == -std::numeric_limits<double>::infinity()
			|| std::isnan(number));
}

Convertor::Convertor(std::string input): input(input), type("-") {
	this->iValue = 0;
	this->cValue = 0;
	this->fValue = 0;
	this->dValue = 0;
	if (!this->parseInput())
		throw (Convertor::InvalidInputException());
	std::cout << "type: " + this->type << std::endl;
	if (this->type == "c") {
		this->iValue = static_cast<int>(input[0]);
		this->cValue = static_cast<char>(input[0]);
		this->fValue = static_cast<float>(input[0]);
		this->dValue = static_cast<double>(input[0]);
	}
	if (this->type == "i") {
		this->iValue = static_cast<int>(atoi(input.c_str()));
		this->cValue = static_cast<char>(atoi(input.c_str()));
		this->fValue = static_cast<float>(atoi(input.c_str()));
		this->dValue = static_cast<double>(atoi(input.c_str()));
	}
	if (this->type == "d") {
		this->iValue = static_cast<int>(atof(input.c_str()));
		this->cValue = static_cast<char>(atof(input.c_str()));
		this->fValue = static_cast<float>(atof(input.c_str()));
		this->dValue = static_cast<double>(atof(input.c_str()));
	}
	if (this->type == "f") {
		this->iValue = static_cast<int>(atof(input.c_str()));
		this->cValue = static_cast<char>(atof(input.c_str()));
		this->fValue = static_cast<float>(atof(input.c_str()));
		this->dValue = static_cast<double>(atof(input.c_str()));
	}
}

Convertor::Convertor(const Convertor &src): input(src.input) {
	*this = src;
}

Convertor &Convertor::operator=(const Convertor &other) {
	this->iValue = other.iValue;
	this->cValue = other.cValue;
	this->fValue = other.fValue;
	this->dValue = other.dValue;
	return *this;
}

Convertor::~Convertor() {}

bool Convertor::parseWeirdInput() {
	if (this->input == "inf" || this->input == "+inf" || this->input == "-inf" || this->input == "nan")
		this->type = "d";
	else if (this->input == "inff" || this->input == "+inff" || this->input == "-inff" || this->input == "nanf")
		this->type = "f";
	return this->type != "-";
}

bool Convertor::parseInput() {
	if (!this->input.length())
		return false;
	if (parseWeirdInput())
		return true;
	if (this->type != "-")
		return true;
	if (this->input.length() == 1)
		this->type = "c";
	if (std::isdigit(this->input[0]) || this->input[0] == '-' || this->input[0] == '+' || this->input[0] == '.')
	{
		int i = this->input[0] == '-';
		int dotQty = 0;

		if (this->input[i + 1] && this->input[i] == '.' && this->input[i + 1] == 'f')
			return false;
		while (this->input[i] == '.' || std::isdigit(this->input[i])) {
			if (this->input[i] == '.')
				dotQty++;
			if (dotQty > 1)
				return false;
			i++;
		}
		if (!this->input[i]) {
			this->type = dotQty == 1 ? 'd' : 'i';
		} else if (this->input[i] == 'f') {
			this->type = this->input[i + 1] == 0 ? 'f' : '-';
		}
	}
	if (this->type == "-")
		return false;
	return true;
}

void Convertor::printTypes() {
	this->printChar();
	this->printInt();
	this->printFloat();
	this->printDouble();
}

void Convertor::printChar() {
	if (this->dValue > 127 || this->dValue < 0 || isnan(this->dValue))
		std::cout << "char   : Impossible" << std::endl;
	else if (this->cValue < 127 && this->cValue > 31)
		std::cout << "char   : " << this->cValue << std::endl;
	else
		std::cout << "char   : Not displayable" << std::endl;
}

void Convertor::printInt() {
	if (isValidToInt(this->dValue))
		std::cout << "int    : " << this->iValue << std::endl;
	else
		std::cout << "int    : Impossible" << std::endl;
}

void Convertor::printFloat() {
	if (!isValidToFloat(this->dValue))
		std::cout << "float  : Impossible" << std::endl;
	else {
		if (this->dValue - static_cast<int>(this->dValue/1.0) * 1.0 == 0.0)
			std::cout << "float  : " << this->fValue << ".0f" << std::endl;
		else
			std::cout << "float  : " << this->fValue << "f" << std::endl;
	}
}

void Convertor::printDouble() {
	if (this->dValue - static_cast<int>(this->dValue/1.0) * 1.0 == 0.0)
		std::cout << "double : " << this->fValue << ".0" << std::endl;
	else
		std::cout << "double : " << this->fValue << std::endl;
}