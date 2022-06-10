/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 18:48:26 by rchampli          #+#    #+#             */
/*   Updated: 2022/06/08 15:41:08 by rchampli         ###   ########.fr       */
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
    Animal();
    Animal(const Animal &src);
    virtual ~Animal();
    virtual Animal &operator=(const Animal &rhs);

    virtual void makeSound(void) const;

    const std::string &getType() const;
    virtual Brain *getBrain( void ) const = 0;

protected:
    std::string type;

private:

};

std::ostream	&operator<<( std::ostream &ostream, const Animal &instance );

#endif