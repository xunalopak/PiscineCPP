/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 20:24:35 by rchampli          #+#    #+#             */
/*   Updated: 2022/06/07 20:40:40 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>
#include <string>

class WrongAnimal
{
public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal &src);
    virtual ~WrongAnimal();

    virtual void makeSound() const;
    const std::string &getType() const;

protected:
    std::string type;
};

#endif