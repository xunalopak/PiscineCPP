/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:52:58 by rchampli          #+#    #+#             */
/*   Updated: 2022/06/11 13:00:23 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <string>

class Bureaucrat
{
public:
    Bureaucrat(const std::string name, unsigned int grade);
    // Bureaucrat(const Bureaucrat &src);
    virtual ~Bureaucrat();

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
    // Bureaucrat&operator=(const Bureaucrat &other);
    
    const std::string name;
    unsigned int grade;
protected:

};

std::ostream	&operator<<( std::ostream &ostream, const Bureaucrat &instance );

#endif