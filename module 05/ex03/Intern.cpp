#include "Intern.hpp"

Intern::Intern(Intern const &src)
{
	std::cout << "Copy construtor called for Intern" << std::endl;
	*this = src;
}

Intern::Intern()
{
	std::cout << "Default construtor called for Intern" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Destructor called for Intern" << std::endl;
}

Intern & Intern::operator=(Intern const & other)
{
	std::cout << "Assignement operator for Intern" << std::endl;
	(void)other;
	return *this;
}

Form *Intern::makeForm(const std::string formName, const std::string target) const
{
	Form	*newForm = NULL;
	t_formList forms[] = {
		{"shrubbery creation", new ShrubberyCreationForm(target)},
		{"robotomy request", new RobotomyRequestForm(target)},
		{"presidential pardon", new PresidentialPardonForm(target)},
	};

	for (int i = 0; i < 3; i++)
	{
		if (forms[i].formName == formName)
			newForm = forms[i].formType;
		else
			delete forms[i].formType;
	}
	if (newForm)
		std::cout << "Intern creates " + formName << std::endl;
	else
		std::cout << "Intern could not find this form type" << std::endl;
	return newForm;
}