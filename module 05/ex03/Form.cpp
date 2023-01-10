/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:00:25 by rchampli          #+#    #+#             */
/*   Updated: 2023/01/10 03:35:44 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(Form const &src): name(src.name), signGrade(src.signGrade), execGrade(src.execGrade), target(src.target)
{
	std::cout << "Copy construtor called for Form" << std::endl;
	*this = src;
}

Form::Form():
name("default"), sign(false), signGrade(1), execGrade(1), target("default")
{
	std::cout << "Default constructor called for Form" << std::endl;
}

Form::Form(const std::string name, int signGrade, int execGrade, const std::string _target): 
name(name), sign(false), signGrade(signGrade), execGrade(execGrade), target(_target)
{
	std::cout << "Form constructor called" << std::endl;
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
	if (this == &other)
		return *this;
	this->sign = other.sign;
	return *this;
}

const std::string Form::getName() const
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

std::string Form::getTarget() const
{
	return this->target;
}

void	Form::setSignature(const bool sign){this->sign = sign;}
void	Form::setTarget(const std::string targ){this->target = targ;}

void Form::beSigned(Bureaucrat const &bureaucrat) {
	if (bureaucrat.getGrade() > this->signGrade)
		throw GradeTooLowException();
	this->sign = true;
}

void Form::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
	if (!this->isSigned())
		throw FormNotSignedException();
	std::cout << this->name << " has been executed" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Form &form) {
	os << "name: " << form.getName() << ", signed: " << form.isSigned()
	   << ", signGrade: " << form.getSignGrade() << ", execGrade: " << form.getExecGrade();
	return os;
}