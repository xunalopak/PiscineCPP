#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
    PresidentialPardonForm();
    PresidentialPardonForm(const std::string &target);
    PresidentialPardonForm(const PresidentialPardonForm &src);
    virtual ~PresidentialPardonForm();
    PresidentialPardonForm&operator=(const PresidentialPardonForm &other);

    void execute(const Bureaucrat& executor) const;

private:

protected:

};

std::ostream	&operator<<( std::ostream &ostream, const PresidentialPardonForm &instance );

#endif