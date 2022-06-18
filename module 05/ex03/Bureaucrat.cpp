/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:52:53 by rchampli          #+#    #+#             */
/*   Updated: 2022/06/18 16:01:20 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	std::cout << "Copy construtor called for Bureaucrat" << std::endl;
	*this = src;
}

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade) : name(name)
{
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	std::cout << "Default construtor called for Bureaucrat" << std::endl;
	this->grade = grade;
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

void Bureaucrat::gradeUp() {
	if (this->grade - 1 < 1)
		throw GradeTooHighException();
	else
		this->grade -= 1;
}

void Bureaucrat::gradeDown() {
	if (this->grade + 1 > 150)
		throw GradeTooLowException();
	else
		this->grade += 1;
}

void Bureaucrat::signForm(Form& form)
{
	try{
		form.beSigned(*this);
		std::cout << this->name + " signed the form named " + form.getName() << std::endl;
	}
	catch (Form::GradeTooLowException &e){
		std::cout << this->name + " couldn't sign form " + form.getName() + " : " + e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(const Form &form) {
	try {
		form.execute(*this);

		std::cout << this->name + " executed " + form.getName() << std::endl;
	} catch (Form::GradeTooLowException &e) {
		std::cout << this->name + " could not execute " + form.getName() + " because " + e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat) {
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	return os;
}