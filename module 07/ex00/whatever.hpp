/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:58:19 by rchampli          #+#    #+#             */
/*   Updated: 2022/09/05 17:13:01 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T> void swap(T &a, T &b)
{
	T c;

	c = a;
	a = b;
	b = c;
}

template<typename T>const  T &min(const T &a, const T &b)
{
	return (a < b ? a : b);
}

template<typename T> const T &max(const T &a, const T &b)
{
	return (a > b ? a : b); 
}

#endif