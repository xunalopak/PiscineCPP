/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 21:35:18 by rchampli          #+#    #+#             */
/*   Updated: 2022/05/12 22:13:33 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

int main()
{
	Harl harl;

	harl.complain("debug");
	harl.complain("info");
	harl.complain("warning");
	harl.complain("error");
	harl.complain("autre chose");
}