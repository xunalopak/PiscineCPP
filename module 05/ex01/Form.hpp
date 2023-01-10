/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 22:00:13 by rchampli          #+#    #+#             */
/*   Updated: 2023/01/10 03:23:45 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Form
{
public:
    Form();
    Form(const std::string &name, int signGrade, int execGrade);
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

    const std::string       &getName() const;
    bool                    isSigned() const;
    int                     getSignGrade() const;
    int                     getExecGrade() const;
    void                    beSigned(Bureaucrat &Bureaucrat);

private:
    const std::string name;
    bool sign;
    const unsigned int signGrade;
    const unsigned int execGrade;

protected:

};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif