/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:22:31 by rchampli          #+#    #+#             */
/*   Updated: 2022/06/22 17:11:35 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

uintptr_t serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int main() {
	Data *data = new Data;
	uintptr_t raw;

	data->i = 42;
	data->f = 42.42f;
	data->d = 420.667;
	data->s = "TEST 123";

	std::cout << "========= INITIAL STATE =========" << std::endl;

	std::cout << "Stored int    : " << data->i << std::endl;
	std::cout << "Stored double : " << data->d << std::endl;
	std::cout << "Stored float  : " << data->f << std::endl;
	std::cout << "Stored string : " << data->s << std::endl;

	std::cout << "========= SERIALIZATION =========" << std::endl;

	raw = serialize(data);

	std::cout << "Serialized Data * to uintptr_t : " << raw << std::endl;
	std::cout << "========= DATA_PTR RESET TO NULL =========" << std::endl;

	data = NULL;

	std::cout << "Reset data to NULL!" << std::endl;
	std::cout << "========= DESERIALIZATION =========" << std::endl;

	data = deserialize(raw);

	std::cout << "Deserialized uintptr_t to Data *! " << std::endl;
	std::cout << "========= END STATE =========" << std::endl;


	std::cout << "Stored int    : " << data->i << std::endl;
	std::cout << "Stored double : " << data->d << std::endl;
	std::cout << "Stored float  : " << data->f << std::endl;
	std::cout << "Stored string : " << data->s << std::endl;
}