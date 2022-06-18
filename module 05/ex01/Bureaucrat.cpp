/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:52:53 by rchampli          #+#    #+#             */
/*   Updated: 2022/06/18 14:28:18 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	std::cout << "Copy construtor called for Bureaucrat" << std::endl;
	*this = src;
	return;
}

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade) : name(name), grade(grade)
{
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHightException();
	std::cout << "Default construtor called for Bureaucrat" << std::endl;
	return;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called for Bureaucrat" << std::endl;
	return;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & other)
{
	std::cout << "Assignement operator for Bureaucrat" << std::endl;
	this->grade = other.grade;
	return *this;
}

const std::string &Bureaucrat::getName() const
{
	return this->name;
}

const int &Bureaucrat::getGrade() const
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

void Bureaucrat::signForm(Form& form)
{
	try{
		form.beSigned(*this);
		std::cout << this->name << " signed the form named " << form.getName() << std::endl;
	}
	catch (GradeTooLowException &e){
		std::cout << this->name << " couldn't sign form " << form.getName() << " : " << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat) {
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	return os;
}