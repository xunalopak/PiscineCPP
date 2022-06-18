/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:52:58 by rchampli          #+#    #+#             */
/*   Updated: 2022/06/18 16:10:45 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <string>
#include "Form.hpp"

#define DEBUG "\033[1;36m"
#define NOICE "\033[1;32m"
#define ERROR "\033[1;31m"
#define RESET "\033[0;0m"

class Form;

class Bureaucrat
{
public:
    Bureaucrat(const std::string name, unsigned int grade);
    Bureaucrat(const Bureaucrat &src);
    virtual ~Bureaucrat();

    const std::string &getName() const;
    const int &getGrade() const;
    
    void gradeUp();
    void gradeDown();

    void signForm(Form& form);
    void executeForm(const Form &form);

    class GradeTooHighException : public std::exception
    { 
    public: 
        virtual const char *what() const throw(){return("grade is too high");}
    }; 
    class GradeTooLowException : public std::exception
    { 
    public: 
        virtual const char *what() const throw(){return("grade is too low");}
    }; 

private:
    Bureaucrat&operator=(const Bureaucrat &other);
    
    const std::string name;
    int grade;
protected:

};

std::ostream	&operator<<( std::ostream &ostream, const Bureaucrat &instance );

#endif