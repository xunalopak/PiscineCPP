/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 23:12:48 by rchampli          #+#    #+#             */
/*   Updated: 2022/05/13 01:01:57 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int ifixe;
	int const static number_fractal = 8;
public:
	Fixed();
	Fixed(const Fixed& src);
	~Fixed();
	Fixed &operator=(const Fixed& rhs);

	int getRawBits(void);
	void setRawBits(int const raw);
};



#endif