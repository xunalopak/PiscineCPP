/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 01:04:04 by rchampli          #+#    #+#             */
/*   Updated: 2022/05/13 02:41:44 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : ifixe(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->ifixe = value << this->number_fractal;
}

Fixed::Fixed(const float value)
{
	int power = pow(2, this->number_fractal);

	std::cout << "Float constructor called" << std::endl;
	this->ifixe = roundf(value * power);
}

Fixed::Fixed(const Fixed& src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" <<std::endl;
}

Fixed & Fixed::operator=(const Fixed& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->ifixe = rhs.ifixe;
	return (*this);
}

int Fixed::getRawBits(void)
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->ifixe);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->ifixe = raw;
}

int Fixed::toInt(void) const
{
	return (this->ifixe >> this->number_fractal);
}

float Fixed::toFloat(void) const
{
	int power = pow(2, this->number_fractal);
	float result = (float)this->ifixe / power;
	return (result);
}
