/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 01:04:11 by rchampli          #+#    #+#             */
/*   Updated: 2022/05/23 16:13:15 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
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
	bool operator>(Fixed& rhs);
	bool operator<(Fixed& rhs);
	bool operator>=(Fixed& rhs);
	bool operator<=(Fixed& rhs);
	bool operator==(Fixed& rhs);
	bool operator!=(Fixed& rhs);
	Fixed operator*(Fixed& rhs);
	Fixed operator/(Fixed& rhs);
	Fixed operator+(Fixed& rhs);
	Fixed operator-(Fixed& rhs);
	Fixed &operator++(void);
	Fixed &operator--(void);
	Fixed operator++(int);
	Fixed operator--(int);

	static const Fixed &max(const Fixed &a, const Fixed &b);
	static const Fixed &min(const Fixed &a, const Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static Fixed &min(Fixed &a, Fixed &b);
	

	int getRawBits(void);
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};
std::ostream &    operator<<( std::ostream & ostr, Fixed const & instance);

#endif