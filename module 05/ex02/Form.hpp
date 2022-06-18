/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 22:00:00 by rchampli          #+#    #+#             */
/*   Updated: 2022/06/18 16:12:44 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
public:
    Form(const std::string &name, int signGrade, int execGrade);
    Form(const Form &src);
    virtual ~Form();
    

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
    class FormNotSignedException: public std::exception 
    {
	public:
		virtual const char* what() const throw() {return ("form is not signed");}
	};

    const std::string    &getName() const;
    bool                 isSigned() const;
    int                  getSignGrade() const;
    int                  getExecGrade() const;
    void                 beSigned(Bureaucrat const &bureaucrat);
    virtual void         execute(const Bureaucrat &bureaucrat) const;

private:
    Form&operator=(const Form &other);
    
    std::string name;
    bool sign;
    const int signGrade;
    const int execGrade;

protected:

};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif