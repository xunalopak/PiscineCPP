/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:52:53 by rchampli          #+#    #+#             */
/*   Updated: 2023/01/10 01:16:33 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(Bureaucrat const &src) : name(src.name), grade(src.grade)
{
	std::cout << "Copy construtor called for Bureaucrat" << std::endl;
}

Bureaucrat::Bureaucrat() : name("default"), grade(150)
{
	std::cout << "Default construtor called for Bureaucrat" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade) : name(name), grade(grade)
{
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHightException();
	std::cout << "Default construtor called for Bureaucrat" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called for Bureaucrat" << std::endl;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & other)
{
	std::cout << "Assignement operator for Bureaucrat" << std::endl;
	if (this == &other)
		return *this;
	this->grade = other.grade;
	return *this;
}

const std::string &Bureaucrat::getName() const
{
	return this->name;
}

const unsigned int &Bureaucrat::getGrade() const
{
	return this->grade;
}

void Bureaucrat::gradeUp()
{
	this->grade -= 1;
	if (this->grade < 1)
		throw GradeTooHightException();
}

void Bureaucrat::gradeDown()
{
	this->grade += 1;
	if (this->grade > 150)
		throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat) {
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	return os;
}