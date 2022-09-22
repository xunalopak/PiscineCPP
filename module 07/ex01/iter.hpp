/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 17:23:38 by rchampli          #+#    #+#             */
/*   Updated: 2022/09/05 17:39:45 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>
#include <string>

template<typename T> void iter(const T *array, int size, void function(const T &))
{
	for (int i = 0; i < size; i++)
		function(array[i]);
}

template<typename T> void printArray(const T &data)
{
	std::cout << data <<std::endl;
}

#endif