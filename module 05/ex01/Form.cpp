/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:00:25 by rchampli          #+#    #+#             */
/*   Updated: 2023/01/10 01:17:17 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(Form const &src): name(src.name), signGrade(src.signGrade), execGrade(src.execGrade) 
{
	std::cout << "Copy construtor called for Form" << std::endl;
}

Form::Form(): name("default"), sign(false), signGrade(150), execGrade(150)
{
	std::cout << "Default construtor called for Form" << std::endl;
}

Form::Form(const std::string &name, int signGrade, int execGrade): name(name), sign(false), signGrade(signGrade), execGrade(execGrade)
{
	std::cout << "Constructor called" << std::endl;
	if (signGrade < 1)
		throw GradeTooLowException();
	if (signGrade > 150)
		throw GradeTooLowException();
	if (execGrade < 1)
		throw GradeTooLowException();
	if (execGrade > 150)
		throw GradeTooLowException();
}

Form::~Form()
{
	std::cout << "Destructor called for Form" << std::endl;
}

Form & Form::operator=(Form const & other)
{
	std::cout << "Assignement operator for Form" << std::endl;
	this->sign = other.sign;
	return *this;
}

const std::string &Form::getName() const
{
	return this->name;
}

bool Form::isSigned() const
{
	return this->sign;
}

int Form::getSignGrade() const
{
	return this->signGrade;
}

int Form::getExecGrade() const
{ 
	return this->execGrade;
}

void Form::beSigned(Bureaucrat &Bureaucrat)
{
	if (Bureaucrat.getGrade() <= this->signGrade)
		this->sign = true;
	else
		throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &os, const Form &form) {
	os << "name: " << form.getName() << ", signed: " << form.isSigned()
	   << ", signGrade: " << form.getSignGrade() << ", execGrade: " << form.getExecGrade();
	return os;
}