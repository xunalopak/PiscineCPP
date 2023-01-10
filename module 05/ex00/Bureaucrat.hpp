/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:52:58 by rchampli          #+#    #+#             */
/*   Updated: 2023/01/10 01:07:18 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <string>

class Bureaucrat
{
public:
    Bureaucrat();
    Bureaucrat(const std::string name, unsigned int grade);
    Bureaucrat(const Bureaucrat &src);
    virtual ~Bureaucrat();
    Bureaucrat&operator=(const Bureaucrat &other);

    const std::string &getName() const;
    const unsigned int &getGrade() const;
    
    void gradeUp();
    void gradeDown();

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

private:
    
    const std::string name;
    unsigned int grade;
protected:

};

std::ostream	&operator<<( std::ostream &ostream, const Bureaucrat &instance );

#endif