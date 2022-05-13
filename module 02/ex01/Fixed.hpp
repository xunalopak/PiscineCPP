/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.Hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 01:04:11 by rchampli          #+#    #+#             */
/*   Updated: 2022/05/13 02:37:27 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int ifixe;
	int const static number_fractal = 8;
public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed& src);
	~Fixed();
	Fixed &operator=(const Fixed& rhs);

	int getRawBits(void);
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};

#endif