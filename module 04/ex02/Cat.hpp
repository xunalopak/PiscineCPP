/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 18:48:22 by rchampli          #+#    #+#             */
/*   Updated: 2022/06/08 15:45:51 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat : public Animal
{
public:
    Cat();
    Cat(const Cat &src);
    ~Cat();
	Cat &operator=( Cat const &other );
    
	Animal &operator=( Animal const &other );

    virtual void makeSound() const;
    virtual Brain *getBrain() const;

private:
    Brain *brain;
};

#endif