/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:52:58 by rchampli          #+#    #+#             */
/*   Updated: 2022/06/10 16:58:58 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <string>

#define DEBUG "\033[1;36m"
#define ERROR "\033[1;31m"
#define RESET "\033[0;0m"

class Bureaucrat
{
public:
    Bureaucrat(const std::string name, unsigned int grade);
    // Bureaucrat(const Bureaucrat &src);
    virtual ~Bureaucrat();

    const std::string &getName() const;
    const unsigned int &getGrade() const;
    


private:
    // Bureaucrat&operator=(const Bureaucrat &other);
    
    const std::string name;
    unsigned int grade;
protected:

};

std::ostream	&operator<<( std::ostream &ostream, const Bureaucrat &instance );

#endif