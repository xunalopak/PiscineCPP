#ifndef INTERN_H
#define INTERN_H

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
public:
    Intern();
    Intern(const Intern &src);
    ~Intern();
    Intern&operator=(const Intern &other);

    Form *makeForm(const std::string formName, const std::string target) const;



private:
    typedef struct	s_formList
	{
		std::string	formName;
		Form		*formType;
	}				t_formList;

protected:

};

std::ostream	&operator<<( std::ostream &ostream, const Intern &instance );

#endif