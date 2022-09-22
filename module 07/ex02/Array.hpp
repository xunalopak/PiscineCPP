/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:42:11 by rchampli          #+#    #+#             */
/*   Updated: 2022/09/06 17:44:09 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <string>

template<typename T> class Array
{
	private:
		T				*_data;
		unsigned int	_size;
		
	public:
		Array(void) : _data(NULL), _size(0) {}
		Array(const unsigned int n) : _data(new T[n]), _size(n) {}
		Array(const Array<T> &array) : _data(NULL), _size(0) { *this = array; }
		virtual ~Array() { delete [] _data; }

		Array<T>	&operator=(const Array<T> &array)
		{
			if (this != &array)
			{
				if (_size > 0)
					delete [] _data;
				_size = array._size;
				_data = new T[array._size];
				for (unsigned int i = 0; i < _size; i++)
					_data[i] = array._data[i];
			}
			return (*this);
		}

		T	&operator[](const int i) const
		{
			if (i < 0 || static_cast<unsigned int>(i) >= _size)
				throw OutOfRange();
			return (_data[i]);
		}

		unsigned int	size(void) const { return (_size); }

		class OutOfRange : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Array::exception : index is out of range");
				}
		};

};

template<typename T> std::ostream	&operator<<(std::ostream &o, const Array<T> &array)
{
	unsigned int	max = 5;

	o << "[" << array.size() << "] ";
	for (unsigned int i = 0; i < array.size() && i < max; i++)
		o << array[i] << " ";
	if (max < array.size())
		o << "...";
	o << std::endl;
	return (o);
}


#endif