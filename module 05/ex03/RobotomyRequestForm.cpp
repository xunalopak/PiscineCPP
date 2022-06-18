/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 16:17:36 by rchampli          #+#    #+#             */
/*   Updated: 2022/06/18 16:53:59 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src)
: Form(src.getName(), src.getSignGrade(), src.getExecGrade()), target(src.target)
{
	std::cout << "Copy construtor called for RobotomyRequestForm" << std::endl;
	*this = src;
	return;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target):
Form("RobotomyRequestForm", 72, 45), target(target)
{
	std::cout << "Default construtor called for RobotomyRequestForm" << std::endl;
	return;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Destructor called for RobotomyRequestForm" << std::endl;
	return;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & other)
{
	std::cout << "Assignement operator for RobotomyRequestForm" << std::endl;
	(void)other;
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	int random = std::rand();
	
	if (executor.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
	if (!this->isSigned())
		throw FormNotSignedException();
	if (random % 2 == 0)
	{
		std::cout << "BRUUUUUTTTTTT" << std::endl;
		std::cout << "BRUUUUUTTTTTT" << std::endl;
		std::cout << this->target + " has been eliminated" << std::endl;
	}
	else
	{	
		std::cout << "BRUUUUUTTTTTT" << std::endl;
		std::cout << "BRUUUUUTTTTTT" << std::endl;
		std::cout << this->target + " survived, mission failed" << std::endl;
	}
}
