#include "Form.hpp"

Form::Form(Form const &src)
{
	std::cout << "Copy construtor called for Form" << std::endl;
	*this = src;
	return;
}

Form::Form(const std::string name, int signGrade, int execGrade): name(name),
	signGrade(signGrade), execGrade(execGrade)
{
	std::cout << "Default construtor called for Form" << std::endl;
	return;
}

Form::~Form()
{
	std::cout << "Destructor called for Form" << std::endl;
	return;
}

Form & Form::operator=(Form const & other)
{
	std::cout << "Assignement operator for Form" << std::endl;
	return *this;
}

std::ostream &operator<<(std::ostream &os, const Form&Form) {
	os << "name: " << form.getName() << ", signed:" << form.issigned()
	<< ", signGrade: " << form.getSignGrade() << ", execGrade: " << form.getExecGrade();
	return os;
}