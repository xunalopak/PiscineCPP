/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:48:05 by rchampli          #+#    #+#             */
/*   Updated: 2022/09/22 17:07:54 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#include <iostream>
#include <string>
#include <stack>
#include <clocale>

template <typename T>
class MutantStack: public std::stack<T>
{
    public:
    MutantStack<T>(void) {}
    MutantStack<T>(const MutantStack<T> &src) : std::stack<T>(src) {}
    ~MutantStack<T>(void) {}
    MutantStack<T> &operator=(const MutantStack<T> &rhs) {
        (void) rhs;
        return *this;
    };

    typedef typename std::stack<T>::container_type::iterator iterator;

    iterator begin() {
        return std::stack<T>::c.begin();
    };

    iterator end() {
        return std::stack<T>::c.end();
    };

};

#endif