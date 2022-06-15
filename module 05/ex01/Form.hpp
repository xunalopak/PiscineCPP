#ifndef FORM_H
#define FORM_H

#include <iostream>
#include <string>

class Form
{
public:
    Form(const std::string name, int signGrade, int execGrade);
    Form(const Form &src);
    ~Form();
    Form&operator=(const Form &other);

    class GradeTooHightException : public std::exception
    { 
    public: 
        virtual const char *what() const throw(){return("grade is too high");}
    }; 
    class GradeTooLowException : public std::exception
    { 
    public: 
        virtual const char *what() const throw(){return("grade is too low");}
    }; 
    class GradeUnexecutedException : public std::exception
    { 
    public: 
        virtual const char *what() const throw(){return("cannot be executed");}
    }; 

private:
    const std::string name;
    bool sign;
    const int signGrade;
    const int execGrade;

protected:

};

std::ostream	&operator<<( std::ostream &ostream, const Form &instance );

#endif