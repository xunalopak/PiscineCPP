/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 18:48:26 by rchampli          #+#    #+#             */
/*   Updated: 2022/06/07 20:38:08 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class Animal
{
public:
    Animal();
    Animal(const Animal &src);
    virtual ~Animal();

    virtual void makeSound(void) const;

    const std::string &getType() const;

protected:
    std::string type;

private:

};

std::ostream	&operator<<( std::ostream &ostream, const Animal &instance );

#endif