/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 18:48:02 by rchampli          #+#    #+#             */
/*   Updated: 2022/06/08 15:56:40 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog: public Animal
{
public:
    Dog();
    Dog(const Dog &src);
    ~Dog();
    Dog &operator=(Dog const &other);
    
    Animal &operator=(Animal const &other);
    
    virtual void makeSound() const;
    virtual Brain *getBrain() const;

private:
    Brain *brain;
};

#endif