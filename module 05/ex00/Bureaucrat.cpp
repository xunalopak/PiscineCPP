/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:52:53 by rchampli          #+#    #+#             */
/*   Updated: 2022/06/10 16:59:09 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// Bureaucrat::Bureaucrat(Bureaucrat const &src)
// {
// 	std::cout << "Copy construtor called for Bureaucrat" << std::endl;
// 	*this = src;
// 	return;
// }

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade) : name(name), grade(grade)
{
	std::cout << "Default construtor called for Bureaucrat" << std::endl;
	return;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called for Bureaucrat" << std::endl;
	return;
}

// Bureaucrat & Bureaucrat::operator=(Bureaucrat const & other)
// {
// 	std::cout << "Assignement operator for Bureaucrat" << std::endl;
// 	return *this;
// }

const std::string &Bureaucrat::getName() const
{
	return this->name;
}

const unsigned int &Bureaucrat::getGrade() const
{
	return this->grade;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat) {
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	return os;
}