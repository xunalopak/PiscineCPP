/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   annuaire.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 15:27:00 by rchampli          #+#    #+#             */
/*   Updated: 2022/05/10 16:20:30 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANNUAIRE_HPP
# define ANNUAIRE_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "contact.hpp"

class Annuaire
{
private:
	Contact contacts[8];
	int		contact_amount;

	std::string Field_menu[4] = {
	"Index",
	"First Name",
	"Last Name",
	"Nickname"
	};
public:
	Annuaire();
	virtual ~Annuaire();

	void menu(void);
	void add(void);
	void display_menu(void);
	void search_menu(void);
};

#endif