/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 18:48:26 by rchampli          #+#    #+#             */
/*   Updated: 2022/06/10 13:42:24 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal
{
public:
    virtual ~Animal();
    virtual Animal &operator=(const Animal &rhs);

    virtual void makeSound(void) const;

    const std::string &getType() const;
    virtual Brain *getBrain( void ) const = 0;

protected:
    std::string type;

private:
    //or get private constructor and copy constructor
};

std::ostream	&operator<<( std::ostream &ostream, const Animal &instance );

#endif