/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 21:59:57 by rchampli          #+#    #+#             */
/*   Updated: 2023/01/10 03:02:34 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
public:
    ShrubberyCreationForm(const std::string &target);
    ShrubberyCreationForm(const ShrubberyCreationForm &src);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm&operator=(ShrubberyCreationForm const &other);
    

    class OutputFileException : public std::exception {
        public: 
        virtual const char *what() const throw() {return "could'nt open output file";}
    };

    void execute(const Bureaucrat &executor) const;
private:
protected:

};

#endif