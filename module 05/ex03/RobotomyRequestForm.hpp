/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 16:17:31 by rchampli          #+#    #+#             */
/*   Updated: 2022/06/18 16:46:51 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include <cstdlib>
#include <ctime>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
public:
    RobotomyRequestForm(const std::string &target);
    RobotomyRequestForm(const RobotomyRequestForm &src);
    ~RobotomyRequestForm();
    

    void execute(const Bureaucrat &executor) const;
private:
    RobotomyRequestForm&operator=(const RobotomyRequestForm &other);

    std::string target;
protected:

};

std::ostream	&operator<<( std::ostream &ostream, const RobotomyRequestForm &instance );

#endif