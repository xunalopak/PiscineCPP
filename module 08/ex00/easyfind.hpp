/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 20:41:53 by rchampli          #+#    #+#             */
/*   Updated: 2022/09/09 20:47:51 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
#include <algorithm>

template<typename T> typename T::iterator easyfind(T &c, int n)
{
	return (std::find(c.begin(), c.end(), n));
}

#endif
