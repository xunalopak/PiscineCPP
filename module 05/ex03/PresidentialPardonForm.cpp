#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src):
Form(src.getName(), src.getSignGrade(), src.getExecGrade(), src.getTarget())
{
	std::cout << "Copy construtor called for PresidentialPardonForm" << std::endl;
	*this = src;
}

PresidentialPardonForm::PresidentialPardonForm():
Form("PresidentialPardonForm", 25, 5, "default")
{
	std::cout << "Default constructor called for PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target):
Form("PresidentialPardonForm", 25, 5, target)
{
	std::cout << "Default construtor called for PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Destructor called for PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & other)
{
	std::cout << "Assignement operator for PresidentialPardonForm" << std::endl;
	(void)other;
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	if (executor.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
	if (!this->isSigned())
		throw FormNotSignedException();
	std::cout << this->getTarget() + " has been forgiven by Zaphod Beeblebrox" << std::endl;
}
